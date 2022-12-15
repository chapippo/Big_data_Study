create table food   -- 테이블 생성
(
num int primary key,
name varchar2(50),
price int
);

insert into food(num,name,price) values(1,'불고기',7000);
insert into food(num,name,price) values(2,'김치찌개',6000);
SELECT * FROM FOOD; -- * = 모든 것을 의미함

--ctrl+/ = 주석처리
select name, price from food;

--메뉴만 보여주고 싶다면
select name from food;

--실제 컬럼(=열)명은 name이더라도, 그 이름을 한글 이름으로 '표시'가 된다
--name 부분을 메뉴라는 컬럼(=열)으로 표시함
select name 메뉴 from food;

--6000원대로 먹을 수 있는 음식만 조회해보자
--price가 6000 이상 7000 미만인 값만 나온다.
select * from food where price >=6000 and price <7000;

--김치제육을 김치+제육으로 변경
--이름을 통해서 조회해도 되지만
--
update food set name='김치+제육' where num=3;

--결과 확인
select * from food;

--update문의 가장 큰 주의사항!!!
--끝에 where절을 안 적게 되면
--모든 데이터가 다 일괄적으로 변경이 된다.
--만약 여기서 where문 없으면 모든 음식메뉴가(name값)
--김치+제육이 돼버린다.

--insert할 때 모든 컬럼의 순서를 알고 있다면
--생략하고 values부터 적을 수 있다.
--이 테이블은 숫자, 문자열, 숫자의 순서인데
--순서를 알고 있다면 food 뒤에 컬럼명 생략 가능

--food 뒤에 컬럼명 적는 이유 (8줄)
--1. 명시적으로 컬럼들을 보여주기 위해서
--2. 내가 원하는 순서대로 데이터 넣기 위해서
insert into food(price,name,num) values(10000,'황제정식',5);
--3. 내가 원하는 데이터만 넣기 위해서
insert into food(num, name) values(6,'랜덤메뉴');


insert into food values(4,'무생채',2000);

--git의 commit처럼 내가 작성한 insert, update, delete문을 저장하는 것
--commit 해주지 않고 이 프로그램을 꺼버리면 내가 작성한
--insert update delete가 적용이 안 됨. 즉 저장 안 하고 끈 거랑 같음
commit;

insert into food values(7,'참치김밥',4000);
insert into food values(8,'땡초김밥',6000);
insert into food values(9,'김치김밥',5500);
insert into food values(10,'김밥',3000);

select * from food order by num;
select * from food;

--2 김치라는 것이 들어가는 것만 조회
select * from food where name like '%김치%';
--like 구문 문자열에서 쓰임
--%기호의 뜻은 0글자 이상
--즉 '김치'뿐 아니라 '민트초코 김치' 아니면 '김치 찌개'등
--김치라는 단어 앞뒤에 뭐가 오든지 간에 김치가 포함되면 다 조회한다.

--3 가격이 5000~7000원 사이인 것만 조회
select * from food where price >=5000 and price <=7000;
--4 가격이 null값인 건 1000원으로 조정 (price is null 로 해야 함...)
update food set price=1000 where price is null;
--5 num값이 1번인 메뉴의 이름을 '맛있는 불고기'라고 바꾸기
update food set name='맛있는 불고기' where num=1;

--만약 num의 순서대로 정렬하고 싶다면?
select * from food order by num; --끝에 asc는 생략 가능
--asc : 오름차순 정렬, 생략가능
--desc : 내림차순, 생략 X

--비싼 순서대로 정렬하고 싶다면?
--desc는 내림차순을 의미한다.
select * from food order by price desc;

--null값이 아닌 것만 조회하고 싶다면?
select * from food where price is not null;

--null값이 아닌 것만 조회하고 싶다면+가격 비싼 순?
select * from food where price is not null order by price desc;

commit;
select * from food;

show autocommit;

--commit : 저장
--데이터 추가 수정 삭제하기 전에 commit하고
--만약에 추가 수정 삭제를 잘못했다면 rollback 가능
--주의사항 @@
--1. rollback(=되돌리기)은 내가 최근에 commit한 지점으로만 돌아감
--2. autocommit 기능이 켜져있다면 rollback이 안 먹힘
--왜냐면 insert update delete를 함과 동시에 commit이 된다.

commit;
update food set name='딸기카레'; --모든 음식명을 딸기카레로 바꿈
select * from food;
rollback;--마지막으로 commit한 지점으로 돌림


--insert update select를 했으므로 delete도 해보자.

--delete문
--update문과 마찬가지로 where절 안 적으면 모든 내용이 다 날아감
delete from food where price >=50000;
--drop, truncate라는 구문도 있다.
--drop은 테이블 자체를 싹 지워버리고 rollback(=복구)가 안 됨
--truncate는 데이터만 싹 지우고, 테이블은 남아있는데
--삭제한 데이터에 대해서 rollback이 안 됨.
--다행히 delete는 rollback이 됨

--truncate도 문제지만 drop은 특히 주의해서 써야 함
--테이블 자체를 싹 지워버리고 복구도 안 돼서
--문제가 커질 수 있음 !@#$%!@#$%


--테이블의 컬럼을 추가할 수 있다.
alter table food add recipe varchar2(1000);

--컬럼의 속성도 변경이 가능하다.
alter table food modify price not null;


--실습2
--1 음식 이름이 생채가 들어간 것 삭제
delete from food where name like '%생채%';
--2 음식 이름에 참치가 들어간 것 삭제
delete from food where name like '%참치%';
--3 가격이 7000원 넘는 것 삭제
delete from food where price >=7000;
--4 음식가격이 5000원 이하인 것의 레시피를 'msg추가' 이라고 변경
update food set recipe='msg추가' where price <=5000;
--5 가격이 저렴한 순서로 정렬해서 보여주기
select * from food order by price;
--굳이 명시적으로 적고 싶다면 끝에 asc를 붙이면 됨
select * from food order by price asc;

select * from food;


