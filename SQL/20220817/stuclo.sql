create table studentclo
(
    hakbeon varchar2(20) primary key,
    name varchar2(20) not null,
    clothes varchar2(20) not null,
    material varchar2(20) not null
);

insert into studentclo values('22061','�質��','���ټ���','��'); 
insert into studentclo values('22062','�̴ٴ�','Ƽ����','����');
insert into studentclo values('22063','�ڶ��','��Ʈ','��');

create table majors 
(
    name varchar2(20) not null, 
    code varchar2(20) primary key
);
insert into majors values('�İ�','001');
insert into majors values('ȭ��','002');

alter table studentclo add(code varchar2(20));
alter table studentclo add constraint fk_clo foreign key(code) references majors(code);

update studentclo set code='001' where name='�質��';
update studentclo set code='001' where name='�̴ٴ�';
update studentclo set code='002' where name='�ڶ��';


select hakbeon �й�, studentclo.name �̸�, clothes ����, material ����, majors.name �а��� from studentclo
        join majors on studentclo.code=majors.code;
        
delete from studentclo
        where hakbeon = '22063';
        
select * from studentclo;
