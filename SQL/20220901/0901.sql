--drop table TABLE1;

create table student (
name varchar2(20),
age number,
hakbeon varchar2(20) primary key);
--column��


-- number, varchar2
-- ���ڶ� ���ڿ�

insert into student(hakbeon, name, age) values('11','�ȼ���',19);
insert into student(hakbeon, name, age) values('12','������',15);
insert into student(hakbeon, name, age) values('13','�̹���',16);
insert into student(hakbeon, name, age) values('14','������',33);

select * from student;

--drop - ���̺��� ���� ����, ���� �� ��
--truncate - ���̺� �ִ� ������ ������ �����ϰ� ���̺� ��ü�� �׳� ����
--delete ���̺� �ִ� ���� �����ϰ� ������ ��

commit; --insert, update, delete �� �ķ� ���ִ� �� ����.
rollback; --������ commit�� �κ����� ���ư� �� �ִ�.
          --�������� ���ư��� �� ��. �� 2�ܰ� ������ ���ư��� �� ��


-- ���̰� 10���� �л��� ��ȸ
select * from student;
select * from student where age>=10 and age <=19;
select * from student where age>9 and age<20;


-- * ��ſ� �ٸ� �� �ᵵ ��
select name from student where age>9 and age<20;
select name as �̸� from student where age>9 and age<20;
select name �̸� from student where age>9 and age<20;
select name as "�� ��" from student where age>9 and age<20;
select name "�� ��" from student where age>9 and age<20;



delete from student where name='��ȣ��';

insert into student values ('�ڼ���',10,'123');

select * from student;

update student set age=20 where name='�ڼ���';
update student set age=22 where hakbeon='123';

--crud ��
--pk ��

--���踦 ǥ���Կ� �־ �ſ� �߿��� ����� FK(�ܷ�Ű)�� �� ��
--2�� �̻��� ���̺��� �ϳ��� ���̰� ���ִ� join�� ���ؼ� �ٷﺼ ��


--�а� ���̺� �����
create table major (name varchar2(20), code char(3) primary key);

insert into major values('�İ�','001');
insert into major values('ȭ��','102');
insert into major values('����','103');


--�л� ���̺� ���ο� �÷� �߰��غ���
--�а��ڵ带 �߰��� ��
--���ǻ���
--�а��ڵ� �߰��� �� major ���̺��� code�� �ڷ���, ũ�Ⱑ ��� �¾ƾ� ��
alter table student add (code char(3));

--�ܷ�Ű �߰�
--�������� �̸��� �ƹ����Գ� ��� ��
--major�� code �÷��� ����(reference)�ؼ� �������.
alter table student add constraint fk_stu foreign key(code) references major(code);
                                --�̸��� ����                major table�� �ִ� �ڵ带 �����ؼ� ���ڴ�

--001�� �����ϴ� �а��̹Ƿ� '������' �߰� ����
insert into student values('������',23,'100','001');
--777,666�� ���� ���� �߰� �Ұ���
insert into student values('�̵���1',23,'100','777');



--�л� ���̺� �ִ� �а��ڵ带 �̿��ؼ� �а��� ����غ���
--join
select student.name "�л���", major.name "�а���", hakbeon from student join major on student.code=major.code;

--char�� varchar �� �� ���ڿ�
--char�� ũ�� ���� varchar�� ũ�Ⱑ ����
--char(20) -> ������ 20����Ʈ ũ�� �Ҵ� / varchar(20) -> �ִ� 20����Ʈ �Ҵ�

insert into major values('����','103'); --2��

select name, age from student where code='001'; --3��

update student set age='20' where code='102'; --4��

delete from student where name like '��%'; --5��

--����
--���� ���� ���� ��� ����
--��ø ���� (���ǹ� = ������ �ȿ� ������)
select max(age) from student;
delete from student where age = (select max(age) from student);



