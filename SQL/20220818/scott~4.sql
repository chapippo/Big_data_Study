create table samsungpeople (id int primary key, NAME varchar2(100), BOSS_id int);

insert into samsungpeople values (1, '�̰���', 1);
insert into samsungpeople values (2, 'ȫ����', 2);
insert into samsungpeople values (3, '�̺���', 1);
insert into samsungpeople values (4, '�����', 1);
insert into samsungpeople values (5, '�Ŷ�ȣ��', 3);
insert into samsungpeople values (6, '�Ｚ����', 4);
insert into samsungpeople values (7, '�����Ｚ', 4);
insert into samsungpeople values (8, '�Ｚ���̿���', 4);

select * from samsungpeople;

select a.name "�̸�", b.name "����" from samsungpeople a join samsungpeople b on a.id=b.BOSS_id;

