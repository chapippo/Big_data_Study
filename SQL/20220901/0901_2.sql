--drop table MyDbHakgwa;
--drop table MyDbStudent;

create table MyDbHakgwa (
Code char(3) primary key,       --Code�� �ݵ�� pk�� �ؾ� ��
Name varchar2(30)               --�ٸ� ���̺��� �����Ϸ��� �÷��� pk�� �־� ��
);

create table MyDbStudent (
hakbeon varchar2(10) primary key, 
Name varchar2(60), 
age int, 
HakGwaCode char(3), foreign key(HakGwaCode) references MyDbHakgwa(Code)
);

--�а� �����ͺ��� �־�� ��
--�ֳĸ� �а� �����Ͱ� ������ �л��� �߰��� �� ����.

insert into MyDbHakgwa values ('001','�İ�');
insert into MyDbHakgwa values ('002','�Ƶ�������');
insert into MyDbHakgwa values ('003','ȭ��'); 

insert into MyDbStudent values ('220815','���й�',20,'001');
insert into MyDbStudent values ('220816','�賲��',23,'001');
insert into MyDbStudent values ('220817','������',25,'002');
insert into MyDbStudent values ('220818','�ֿ���',23,'002');
insert into MyDbStudent values ('220819','����',25,'001');
insert into MyDbStudent values ('220820','������',35,'003');
insert into MyDbStudent values ('220821','������',45,'001');
insert into MyDbStudent values ('220822','������',30,'002');
insert into MyDbStudent values ('220823','�̱�ȣ',25,'003');
insert into MyDbStudent values ('220824','�̿뷡',43,'003');



select * from mydbstudent;

--�л����� ���̶� �а��� ��µǰ� join ???????????????????
select mydbstudent.name �л���, hakbeon, mydbhakgwa.name �а��� from mydbstudent 
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;





select * from mydbstudent;

--�б� ��ü �л��� ��� ����
select avg(age) from mydbstudent; -- ��ü ��� ����

--�а��� ��� ����
select hakgwacode, avg(age) from mydbstudent group by hakgwacode; --�а� �ڵ庰 ��ճ���, group by�� ���� "�а� �ڵ带 ��������" ���´�
                                                                                            --�� �׷캰�� ��� ���̸� ����



-- \\\%%% ��ճ��̰� ���� ���� �а� ����غ��� %%%\\\
select mydbstudent.name, mydbhakgwa.name, age from mydbstudent join 
mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code; --�ϴ� �� �л��� ���� � �а�����, �� ������

--(��ø���� ����)
--�켱 �а��� ��� ���̸� ����غ���.

--�а��� ���̸� �켱 ���
select mydbhakgwa.name, age from mydbstudent join 
mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

--�а��� �̸��� �ִ� �� ���̺��� �켱 ��� �����.
create view age_by_student as select mydbhakgwa.name, age from mydbstudent join 
mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

select * from age_by_student;

--�а��� ��� ���̸� ���
select name, avg(age) from age_by_student group by name;

-- ���� ���� �ٲٸ� view�� ���� �ٲ� 
update mydbstudent set age = 20 where age<20; --���̰� 10���� �� ���������̾ �׳� ���� �ٲ�(ū �ǹ� XXX)


--�� �並 �����.
create view avg_age_gwa as select name, avg(age) avgAge from age_by_student group by name;--(�л� �̸��� ���� �а��� ���̸� �ִ� �� ������ view�� ������)
                                                 --�÷��� �����(�Լ��� �Ἥ �÷��� ���ϰ� �Ǹ� �̸��� �������� view�� ������� @@@)

--�а��� ��� ���� ����ϴ� ����� �������
select * from avg_age_gwa;

-- ���� ū ���հ� ����
select max(avgAge) from avg_age_gwa;
 
-- ���� ū ���հ��̶� ��ġ�ϴ� ���� name��Ʈ ���� ���ϴ� ��
select name from avg_age_gwa where avgAge=(select max(avgAge) from avg_age_gwa);


------------------------------------------------------------------------------------------------------------


--�а��� ��� ���̸� ����ϵ�, 23�� �Ѵ� ���� ǥ���ϱ�
select hakgwacode, avg(age) from mydbstudent group by hakgwacode having avg(age)>23;  --group by ~~ having // 
                                                                                                                   --group ���� �Ϳ��� ���� �߰��ϰ� ������ having

--�� �а��� ��� ���� ���
select mydbhakgwa.name, avgage from mydbhakgwa join(
select hakgwacode, avg(age) avgage from mydbstudent group by hakgwacode) a 
on mydbhakgwa.code = a.hakgwacode;



--------------------------------------------------------------------------------------------------------------------



grant create view to c##scott; --sql plus�� �������
create view max_age as (select max(age) maxAge from mydbstudent);
                                                --maxAge��� ������

select * from max_age; --���� ���̺��� ����
--�̷��� �������̺��� ���� �θ���.
--��ø���� ��� ���� ���� ���� Ȱ��ȴ�.
--select�� ���� �ſ� �������� ��� �װ͵��� �� �ܼ�ȭ�� �� ���� ����

--���� �����ڸ� �̴� ���(��ø����)
select * from mydbstudent where age=(select * from max_age);
                                                --���� �����ڿ� ���̰� �Ȱ��� ����� ����Ϸ��� �ϴ±���
                                                
--���� �ֿ������� �а��� ����϶�� �Ѵٸ�???????????
create view max_age_student as select * from mydbstudent where age=(select * from max_age); --view�� ������ ���̺�
    --�� view�� �й�,�̸�,����,�а��ڵ� �� �� �� ǥ�����ִ� view           --age ����   ���̰� ���� ���� ����� ������ ���� ��� @@@@@

select * from max_age_student join mydbhakgwa on max_age_student.hakgwacode = mydbhakgwa.code;   --���
select mydbhakgwa.name from max_age_student join mydbhakgwa on max_age_student.hakgwacode = mydbhakgwa.code;   --�̸��� ���

select * from max_age_student; 

delete from max_age_student; --delete �Ѵٰ� �ص� �������� ���� x







