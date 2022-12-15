create table mykbmajor2 (
name varchar2(30) not null,
code char(3) primary key,
regDate timestamp default sysdate
);

insert into mykbmajor2(name, code) values('�����������','001');
insert into mykbmajor2(name, code) values('������AI','002');

select * from mykbmajor2;




create table mykbstudent2 (
name varchar2(30), 
age char(2),
hakbeon char(10),
hakgwacode char(3), foreign key(hakgwacode) references mykbmajor2(code),
regDate timestamp default sysdate 
);

alter table mykbstudent2 add constraint fk_mykb 
foreign key(hakgwacode) references mykbmajor2(code);

--�Ǽ��� ������ pk ���߿� �߰��ϱ�
alter table mykbstudent2 add constraint mypk primary key(hakbeon);
                                               --�̸� �ƹ����Գ� �ᵵ ok

insert into mykbstudent2 (name,age,hakbeon,hakgwacode) values ('�̵���',34,'1234123412','001');
insert into mykbstudent2 (name,age,hakbeon,hakgwacode) values ('�赿��',24,'1234123422','001');
insert into mykbstudent2 (name,age,hakbeon,hakgwacode) values ('�ڵ���',29,'1234123432','002');

select * from mykbstudent2;



--�䱸���� 6
select mykbstudent2.name, hakbeon, mykbmajor2.name from 
mykbstudent2 join mykbmajor2 on 
mykbstudent2.hakgwacode = mykbmajor2.code;


--�䱸���� 7
select mykbstudent2.name, hakbeon, mykbmajor2.name from 
mykbstudent2 join mykbmajor2 on 
mykbstudent2.hakgwacode = mykbmajor2.code 
where mykbmajor2.name='������AI'; -- Ư������ ����ϰ� ������









