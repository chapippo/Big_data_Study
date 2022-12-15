create table samsungpeople (id int primary key, NAME varchar2(100), BOSS_id int);

insert into samsungpeople values (1, '이건희', 1);
insert into samsungpeople values (2, '홍라희', 2);
insert into samsungpeople values (3, '이부진', 1);
insert into samsungpeople values (4, '이재용', 1);
insert into samsungpeople values (5, '신라호텔', 3);
insert into samsungpeople values (6, '삼성전자', 4);
insert into samsungpeople values (7, '수원삼성', 4);
insert into samsungpeople values (8, '삼성라이온즈', 4);

select * from samsungpeople;

select a.name "이름", b.name "보스" from samsungpeople a join samsungpeople b on a.id=b.BOSS_id;

