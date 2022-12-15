--drop table TABLE1;

create table student (
name varchar2(20),
age number,
hakbeon varchar2(20) primary key);
--column명


-- number, varchar2
-- 숫자랑 문자열

insert into student(hakbeon, name, age) values('11','안서준',19);
insert into student(hakbeon, name, age) values('12','김혜민',15);
insert into student(hakbeon, name, age) values('13','이범식',16);
insert into student(hakbeon, name, age) values('14','오세룡',33);

select * from student;

--drop - 테이블을 완전 삭제, 복구 안 됨
--truncate - 테이블에 있는 내용을 완전히 삭제하고 테이블 자체는 그냥 있음
--delete 테이블에 있는 내용 삭제하고 복구도 됨

commit; --insert, update, delete 전 후로 해주는 게 좋다.
rollback; --직전에 commit한 부분으로 돌아갈 수 있다.
          --연속으로 돌아가진 못 함. 즉 2단계 전으로 돌아가긴 안 됨


-- 나이가 10대인 학생만 조회
select * from student;
select * from student where age>=10 and age <=19;
select * from student where age>9 and age<20;


-- * 대신에 다른 걸 써도 됨
select name from student where age>9 and age<20;
select name as 이름 from student where age>9 and age<20;
select name 이름 from student where age>9 and age<20;
select name as "이 름" from student where age>9 and age<20;
select name "이 름" from student where age>9 and age<20;



delete from student where name='최호준';

insert into student values ('박서준',10,'123');

select * from student;

update student set age=20 where name='박서준';
update student set age=22 where hakbeon='123';

--crud 끗
--pk 끗

--관계를 표현함에 있어서 매우 중요한 요소인 FK(외래키)를 쓸 것
--2개 이상의 테이블을 하나로 보이게 해주는 join에 대해서 다뤄볼 것


--학과 테이블도 만들기
create table major (name varchar2(20), code char(3) primary key);

insert into major values('컴공','001');
insert into major values('화공','102');
insert into major values('전기','103');


--학생 테이블에 새로운 컬럼 추가해보기
--학과코드를 추가할 것
--주의사항
--학과코드 추가할 때 major 테이블의 code랑 자료형, 크기가 모두 맞아야 함
alter table student add (code char(3));

--외래키 추가
--제약조건 이름은 아무렇게나 적어도 됨
--major의 code 컬럼을 참고(reference)해서 만들었다.
alter table student add constraint fk_stu foreign key(code) references major(code);
                                --이름은 자유                major table에 있는 코드를 참고해서 보겠다

--001은 존재하는 학과이므로 '이현민' 추가 가능
insert into student values('이현민',23,'100','001');
--777,666은 없는 과라서 추가 불가능
insert into student values('이동준1',23,'100','777');



--학생 테이블에 있는 학과코드를 이용해서 학과를 출력해보기
--join
select student.name "학생명", major.name "학과명", hakbeon from student join major on student.code=major.code;

--char와 varchar 둘 다 문자열
--char는 크기 고정 varchar는 크기가 유동
--char(20) -> 무조건 20바이트 크기 할당 / varchar(20) -> 최대 20바이트 할당

insert into major values('전기','103'); --2번

select name, age from student where code='001'; --3번

update student set age='20' where code='102'; --4번

delete from student where name like '이%'; --5번

--참고
--나이 제일 많은 사람 삭제
--중첩 질의 (질의문 = 쿼리문 안에 쿼리문)
select max(age) from student;
delete from student where age = (select max(age) from student);



