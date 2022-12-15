create table mykbmajor2 (
name varchar2(30) not null,
code char(3) primary key,
regDate timestamp default sysdate
);

insert into mykbmajor2(name, code) values('정보기술개발','001');
insert into mykbmajor2(name, code) values('빅데이터AI','002');

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

--실수로 빼먹은 pk 나중에 추가하기
alter table mykbstudent2 add constraint mypk primary key(hakbeon);
                                               --이름 아무렇게나 써도 ok

insert into mykbstudent2 (name,age,hakbeon,hakgwacode) values ('이동준',34,'1234123412','001');
insert into mykbstudent2 (name,age,hakbeon,hakgwacode) values ('김동준',24,'1234123422','001');
insert into mykbstudent2 (name,age,hakbeon,hakgwacode) values ('박동준',29,'1234123432','002');

select * from mykbstudent2;



--요구사항 6
select mykbstudent2.name, hakbeon, mykbmajor2.name from 
mykbstudent2 join mykbmajor2 on 
mykbstudent2.hakgwacode = mykbmajor2.code;


--요구사항 7
select mykbstudent2.name, hakbeon, mykbmajor2.name from 
mykbstudent2 join mykbmajor2 on 
mykbstudent2.hakgwacode = mykbmajor2.code 
where mykbmajor2.name='빅데이터AI'; -- 특정과만 출력하고 싶으면









