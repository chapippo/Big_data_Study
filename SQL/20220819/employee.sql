-- order by @@@@@@@

create table Employee 
(
sabeon number primary key, 
name varchar2(20) not null, 
age int, 
JikGeup varchar2(30), 
HP varchar2(13) unique --�⺻Ű(�ߺ����x, null�� ��� x) / unique ���� ���� null ���� ����Ѵ� 
                                                                      --�ߺ��Ǹ� �ȵ����� �������(=null�� ���)
);

insert into Employee values(1,'��ȣ��',30,'����',null);
insert into Employee values(101,'�̵���',34,'����','010-2940-1613'); --sabeon number 1, 001 �̶�� �߰� �ȵ�

select * from Employee;

insert into Employee (sabeon, name, age, jikgeup) values (2,'����ȣ',50,'ȸ��');
insert into Employee (hp,sabeon, name, age, jikgeup) values ('010-1234-4321',3,'����ȭ',40,'��ȸ��');


update Employee set age=20, hp='010-xxxx-yyyy' where sabeon=2;


select * from Employee order by sabeon; -- ��� ������ ����(asc : ��������, ��������)
select * from Employee order by age desc; -- (desc : ��������)

commit; -- ������ ��� Ŀ������� ��
set autocommit on; -- �ڵ�Ŀ�Ա�� �ѱ�

select name, jikgeup as ���� from Employee; --Ư�� �÷��� ������ �� �� �ְ�, ���ϴ� �̸����� ������ �ϱ�






