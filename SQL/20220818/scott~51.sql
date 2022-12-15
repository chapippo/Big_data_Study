select * from song;

create table song ( i_d number primary key, title varchar2(20), price number);

insert into song values (1, 'dragon night', 10000);
insert into song values (2, '신호등', 9000);
insert into song values (3, 'let it be', 8000);
insert into song values (4, 'bad guy', 7000);
insert into song values (5, '분홍신발', 5000);

create table singer (i_d number primary key , name varchar2(20), hit_song_id number 