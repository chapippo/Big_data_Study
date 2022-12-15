insert into studentclo values('22061','김나나','린넨셔츠','마');
insert into studentclo values('22062','이다다','티셔츠','순면');
insert into studentclo values('22063','박라라','니트','울');

create table majors (name varchar2(20), code varchar2(20) primary key);
insert into majors values('컴공','001');
insert into majors values('화공','002');

alter table studentclo add(code varchar2(20));
alter table studentclo add constraint fk_clo foreign key(code) references majors(code);

update studentclo set code='001' where name='김나나';
update studentclo set code='001' where name='이다다';
update studentclo set code='002' where name='박라라';

select * from studentclo;