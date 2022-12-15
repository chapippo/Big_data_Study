-- 시퀀스 : 순차적으로 증가하는 숫자
-- 순차적으로 증가해야 하는 값이 있을 때 많이 씀
-- 일종의 증가 변수
create sequence myrow;
create sequence myseq;


--1부터 1씩 증가, 100되면 다시 1로 돌아옴
--create sequence myseqt


create table song 
(i_d number primary key, title varchar2(100), price number);

create table singer
(id number primary key, name varchar2(100), hit_song_id number, 
foreign key(hit_song_id) references song(i_d));
--참조


insert into song values (myrow.nextval,'dragon night',10000);
insert into song values (myrow.nextval,'신호등',9000);
insert into song values (myrow.nextval,'let it be',8000);
insert into song values (myrow.nextval,'bad guy',7000);
insert into song values (myrow.nextval,'분홍신발',5000);

select * from song;


--hit song을 나중에 추가하려면 이렇게 내가 알고 있는 값의
-- 컬럼(=열)만 적는다. (아는 정보 먼저)
insert into singer(id,name) values(myseq.nextval, '이무진');
insert into singer(id,name) values(myseq.nextval, '세카이노오와리');
insert into singer(id,name) values(myseq.nextval, '유희열');

select * from singer;

update singer set hit_song_id=2 where id=1;
update singer set hit_song_id=1 where id=2;
update singer set hit_song_id=4 where id=3;

insert into singer values(myseq.nextval, '비틀즈', 3);

select name "가수명", title "노래명" from song join singer on song.i_d=singer.hit_song_id;

select name, title from song right join singer on song.i_d=singer.hit_song_id; --우측 singer 다 출력
select name, title from song left join singer on song.i_d=singer.hit_song_id;  --좌측 song 다 출력






--alter table singer add(code varchar2(20));
--alter table studentclo add constraint fk_clo foreign key(code) references majors(code);

