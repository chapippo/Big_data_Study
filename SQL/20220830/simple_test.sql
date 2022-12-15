create table simple_test_table
(
num int primary key,    --겹치지 않고 모두가 가지고 있다
name varchar2(30) not null,
phone_number varchar2(20) unique    --겹치지 않지만 모두가 가지고 있지 않을 수 있다
);

insert into simple_test_table values(1,'이용희',null);
insert into simple_test_table values(2,'이동준','010-2940-1613');
select * from simple_test_table;