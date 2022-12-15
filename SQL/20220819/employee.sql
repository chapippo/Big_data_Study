-- order by @@@@@@@

create table Employee 
(
sabeon number primary key, 
name varchar2(20) not null, 
age int, 
JikGeup varchar2(30), 
HP varchar2(13) unique --기본키(중복허용x, null값 허용 x) / unique 같은 경우는 null 값을 허용한다 
                                                                      --중복되면 안되지만 공백허용(=null값 허용)
);

insert into Employee values(1,'최호준',30,'사장',null);
insert into Employee values(101,'이동준',34,'신입','010-2940-1613'); --sabeon number 1, 001 이라면 추가 안됨

select * from Employee;

insert into Employee (sabeon, name, age, jikgeup) values (2,'박지호',50,'회장');
insert into Employee (hp,sabeon, name, age, jikgeup) values ('010-1234-4321',3,'차승화',40,'부회장');


update Employee set age=20, hp='010-xxxx-yyyy' where sabeon=2;


select * from Employee order by sabeon; -- 사번 순으로 정렬(asc : 오름차순, 생략가능)
select * from Employee order by age desc; -- (desc : 내림차순)

commit; -- 원래는 계속 커밋해줘야 함
set autocommit on; -- 자동커밋기능 켜기

select name, jikgeup as 직급 from Employee; --특정 컬럼만 나오게 할 수 있고, 원하는 이름으로 나오게 하기






