--drop table mykbstudent;
--drop table mykbmajor;

create table mykbstudent (
Name varchar2(30),
Age char(2),
hakbeon char(10) primary key,
hakgwacode char(3), foreign key(hakgwacode) references mykbmajor(hakgwacode),
deungrok date
);

create table mykbmajor (
hakgwaname varchar2(30),
hakgwacode char(3) primary key,
deungrok date
);

insert into mykbmajor values ('정보기술개발', '038', sysdate);
insert into mykbmajor values ('컴퓨터공학과', '026','22/08/17');
insert into mykbmajor values ('기계공학과', '014', sysdate);

insert into mykbstudent values ('이동준','40','2022062701','026',sysdate);
insert into mykbstudent values ('이용희','28','2022062702','014','22/08/17');
insert into mykbstudent values ('장태연','27','2022062703','038',sysdate);

select * from mykbstudent;
--select name "이름", hakbeon "학번" from mykbmajor join mykbstudent on mykbmajor.hakbeon=mykbstudent.hakgwacode;

select mykbstudent.name, hakbeon, mykbmajor.hakgwaname from mykbstudent join mykbmajor on mykbstudent.hakgwacode = mykbmajor.hakgwacode;





