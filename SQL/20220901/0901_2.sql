--drop table MyDbHakgwa;
--drop table MyDbStudent;

create table MyDbHakgwa (
Code char(3) primary key,       --Code는 반드시 pk로 해야 함
Name varchar2(30)               --다른 테이블이 참조하려는 컬럼은 pk로 둬야 함
);

create table MyDbStudent (
hakbeon varchar2(10) primary key, 
Name varchar2(60), 
age int, 
HakGwaCode char(3), foreign key(HakGwaCode) references MyDbHakgwa(Code)
);

--학과 데이터부터 넣어야 함
--왜냐면 학과 데이터가 없으면 학생을 추가할 수 없다.

insert into MyDbHakgwa values ('001','컴공');
insert into MyDbHakgwa values ('002','아동가족학');
insert into MyDbHakgwa values ('003','화공'); 

insert into MyDbStudent values ('220815','김학범',20,'001');
insert into MyDbStudent values ('220816','김남일',23,'001');
insert into MyDbStudent values ('220817','남기일',25,'002');
insert into MyDbStudent values ('220818','최원권',23,'002');
insert into MyDbStudent values ('220819','김상식',25,'001');
insert into MyDbStudent values ('220820','김진혁',35,'003');
insert into MyDbStudent values ('220821','고재현',45,'001');
insert into MyDbStudent values ('220822','이진용',30,'002');
insert into MyDbStudent values ('220823','이근호',25,'003');
insert into MyDbStudent values ('220824','이용래',43,'003');



select * from mydbstudent;

--학생별로 나이랑 학과가 출력되게 join ???????????????????
select mydbstudent.name 학생명, hakbeon, mydbhakgwa.name 학과명 from mydbstudent 
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;





select * from mydbstudent;

--학교 전체 학생의 평균 나이
select avg(age) from mydbstudent; -- 전체 평균 나이

--학과별 평균 나이
select hakgwacode, avg(age) from mydbstudent group by hakgwacode; --학과 코드별 평균나이, group by를 쓰면 "학과 코드를 기준으로" 묶는다
                                                                                            --각 그룹별로 평균 나이를 구함



-- \\\%%% 평균나이가 제일 많은 학과 출력해보기 %%%\\\
select mydbstudent.name, mydbhakgwa.name, age from mydbstudent join 
mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code; --일단 각 학생들 별로 어떤 학과인지, 몇 살인지

--(중첩질의 들어가야)
--우선 학과별 평균 나이를 출력해보자.

--학과별 나이를 우선 출력
select mydbhakgwa.name, age from mydbstudent join 
mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

--학과랑 이름만 있는 이 테이블을 우선 뷰로 만든다.
create view age_by_student as select mydbhakgwa.name, age from mydbstudent join 
mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

select * from age_by_student;

--학과별 평균 나이를 출력
select name, avg(age) from age_by_student group by name;

-- 원본 값을 바꾸면 view의 값도 바뀜 
update mydbstudent set age = 20 where age<20; --나이가 10대인 건 비현실적이어서 그냥 나이 바꿈(큰 의미 XXX)


--또 뷰를 만든다.
create view avg_age_gwa as select name, avg(age) avgAge from age_by_student group by name;--(학생 이름은 없고 학과랑 나이만 있는 것 가지고 view를 만들자)
                                                 --컬럼명 지우기(함수를 써서 컬럼을 구하게 되면 이름을 만들어줘야 view가 만들어짐 @@@)

--학과별 평균 나이 출력하는 뷰까지 만들었음
select * from avg_age_gwa;

-- 가장 큰 나잇값 구함
select max(avgAge) from avg_age_gwa;
 
-- 가장 큰 나잇값이랑 일치하는 행의 name파트 값을 구하는 것
select name from avg_age_gwa where avgAge=(select max(avgAge) from avg_age_gwa);


------------------------------------------------------------------------------------------------------------


--학과별 평균 나이를 출력하되, 23살 넘는 과만 표시하기
select hakgwacode, avg(age) from mydbstudent group by hakgwacode having avg(age)>23;  --group by ~~ having // 
                                                                                                                   --group 나눈 것에서 조건 추가하고 싶으면 having

--각 학과별 평균 나이 출력
select mydbhakgwa.name, avgage from mydbhakgwa join(
select hakgwacode, avg(age) avgage from mydbstudent group by hakgwacode) a 
on mydbhakgwa.code = a.hakgwacode;



--------------------------------------------------------------------------------------------------------------------



grant create view to c##scott; --sql plus로 권한줘야
create view max_age as (select max(age) maxAge from mydbstudent);
                                                --maxAge라는 가상의

select * from max_age; --가상 테이블을 만듦
--이러한 가상테이블을 뷰라고 부른다.
--중첩질의 등에서 쓰기 위해 많이 활용된다.
--select문 등이 매우 복잡해질 경우 그것들을 좀 단순화할 때 많이 쓰임

--제일 연장자를 뽑는 방법(중첩질의)
select * from mydbstudent where age=(select * from max_age);
                                                --제일 연장자와 나이가 똑같은 사람을 출력하려고 하는구나
                                                
--만약 최연장자의 학과를 출력하라고 한다면???????????
create view max_age_student as select * from mydbstudent where age=(select * from max_age); --view는 가상의 테이블
    --이 view는 학번,이름,나이,학과코드 한 줄 다 표시해주는 view           --age 값이   나이가 제일 많은 사람과 동일한 정보 출력 @@@@@

select * from max_age_student join mydbhakgwa on max_age_student.hakgwacode = mydbhakgwa.code;   --출력
select mydbhakgwa.name from max_age_student join mydbhakgwa on max_age_student.hakgwacode = mydbhakgwa.code;   --이르만 출력

select * from max_age_student; 

delete from max_age_student; --delete 한다고 해도 원본에는 영향 x







