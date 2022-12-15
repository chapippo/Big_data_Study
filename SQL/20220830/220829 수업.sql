create table food   -- ���̺� ����
(
num int primary key,
name varchar2(50),
price int
);

insert into food(num,name,price) values(1,'�Ұ��',7000);
insert into food(num,name,price) values(2,'��ġ�',6000);
SELECT * FROM FOOD; -- * = ��� ���� �ǹ���

--ctrl+/ = �ּ�ó��
select name, price from food;

--�޴��� �����ְ� �ʹٸ�
select name from food;

--���� �÷�(=��)���� name�̴���, �� �̸��� �ѱ� �̸����� 'ǥ��'�� �ȴ�
--name �κ��� �޴���� �÷�(=��)���� ǥ����
select name �޴� from food;

--6000����� ���� �� �ִ� ���ĸ� ��ȸ�غ���
--price�� 6000 �̻� 7000 �̸��� ���� ���´�.
select * from food where price >=6000 and price <7000;

--��ġ������ ��ġ+�������� ����
--�̸��� ���ؼ� ��ȸ�ص� ������
--
update food set name='��ġ+����' where num=3;

--��� Ȯ��
select * from food;

--update���� ���� ū ���ǻ���!!!
--���� where���� �� ���� �Ǹ�
--��� �����Ͱ� �� �ϰ������� ������ �ȴ�.
--���� ���⼭ where�� ������ ��� ���ĸ޴���(name��)
--��ġ+������ �Ź�����.

--insert�� �� ��� �÷��� ������ �˰� �ִٸ�
--�����ϰ� values���� ���� �� �ִ�.
--�� ���̺��� ����, ���ڿ�, ������ �����ε�
--������ �˰� �ִٸ� food �ڿ� �÷��� ���� ����

--food �ڿ� �÷��� ���� ���� (8��)
--1. ��������� �÷����� �����ֱ� ���ؼ�
--2. ���� ���ϴ� ������� ������ �ֱ� ���ؼ�
insert into food(price,name,num) values(10000,'Ȳ������',5);
--3. ���� ���ϴ� �����͸� �ֱ� ���ؼ�
insert into food(num, name) values(6,'�����޴�');


insert into food values(4,'����ä',2000);

--git�� commitó�� ���� �ۼ��� insert, update, delete���� �����ϴ� ��
--commit ������ �ʰ� �� ���α׷��� �������� ���� �ۼ���
--insert update delete�� ������ �� ��. �� ���� �� �ϰ� �� �Ŷ� ����
commit;

insert into food values(7,'��ġ���',4000);
insert into food values(8,'���ʱ��',6000);
insert into food values(9,'��ġ���',5500);
insert into food values(10,'���',3000);

select * from food order by num;
select * from food;

--2 ��ġ��� ���� ���� �͸� ��ȸ
select * from food where name like '%��ġ%';
--like ���� ���ڿ����� ����
--%��ȣ�� ���� 0���� �̻�
--�� '��ġ'�� �ƴ϶� '��Ʈ���� ��ġ' �ƴϸ� '��ġ �'��
--��ġ��� �ܾ� �յڿ� ���� ������ ���� ��ġ�� ���ԵǸ� �� ��ȸ�Ѵ�.

--3 ������ 5000~7000�� ������ �͸� ��ȸ
select * from food where price >=5000 and price <=7000;
--4 ������ null���� �� 1000������ ���� (price is null �� �ؾ� ��...)
update food set price=1000 where price is null;
--5 num���� 1���� �޴��� �̸��� '���ִ� �Ұ��'��� �ٲٱ�
update food set name='���ִ� �Ұ��' where num=1;

--���� num�� ������� �����ϰ� �ʹٸ�?
select * from food order by num; --���� asc�� ���� ����
--asc : �������� ����, ��������
--desc : ��������, ���� X

--��� ������� �����ϰ� �ʹٸ�?
--desc�� ���������� �ǹ��Ѵ�.
select * from food order by price desc;

--null���� �ƴ� �͸� ��ȸ�ϰ� �ʹٸ�?
select * from food where price is not null;

--null���� �ƴ� �͸� ��ȸ�ϰ� �ʹٸ�+���� ��� ��?
select * from food where price is not null order by price desc;

commit;
select * from food;

show autocommit;

--commit : ����
--������ �߰� ���� �����ϱ� ���� commit�ϰ�
--���࿡ �߰� ���� ������ �߸��ߴٸ� rollback ����
--���ǻ��� @@
--1. rollback(=�ǵ�����)�� ���� �ֱٿ� commit�� �������θ� ���ư�
--2. autocommit ����� �����ִٸ� rollback�� �� ����
--�ֳĸ� insert update delete�� �԰� ���ÿ� commit�� �ȴ�.

commit;
update food set name='����ī��'; --��� ���ĸ��� ����ī���� �ٲ�
select * from food;
rollback;--���������� commit�� �������� ����


--insert update select�� �����Ƿ� delete�� �غ���.

--delete��
--update���� ���������� where�� �� ������ ��� ������ �� ���ư�
delete from food where price >=50000;
--drop, truncate��� ������ �ִ�.
--drop�� ���̺� ��ü�� �� ���������� rollback(=����)�� �� ��
--truncate�� �����͸� �� �����, ���̺��� �����ִµ�
--������ �����Ϳ� ���ؼ� rollback�� �� ��.
--������ delete�� rollback�� ��

--truncate�� �������� drop�� Ư�� �����ؼ� ��� ��
--���̺� ��ü�� �� ���������� ������ �� �ż�
--������ Ŀ�� �� ���� !@#$%!@#$%


--���̺��� �÷��� �߰��� �� �ִ�.
alter table food add recipe varchar2(1000);

--�÷��� �Ӽ��� ������ �����ϴ�.
alter table food modify price not null;


--�ǽ�2
--1 ���� �̸��� ��ä�� �� �� ����
delete from food where name like '%��ä%';
--2 ���� �̸��� ��ġ�� �� �� ����
delete from food where name like '%��ġ%';
--3 ������ 7000�� �Ѵ� �� ����
delete from food where price >=7000;
--4 ���İ����� 5000�� ������ ���� �����Ǹ� 'msg�߰�' �̶�� ����
update food set recipe='msg�߰�' where price <=5000;
--5 ������ ������ ������ �����ؼ� �����ֱ�
select * from food order by price;
--���� ��������� ���� �ʹٸ� ���� asc�� ���̸� ��
select * from food order by price asc;

select * from food;


