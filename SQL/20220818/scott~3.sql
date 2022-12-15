-- ������ : ���������� �����ϴ� ����
-- ���������� �����ؾ� �ϴ� ���� ���� �� ���� ��
-- ������ ���� ����
create sequence myrow;
create sequence myseq;


--1���� 1�� ����, 100�Ǹ� �ٽ� 1�� ���ƿ�
--create sequence myseqt


create table song 
(i_d number primary key, title varchar2(100), price number);

create table singer
(id number primary key, name varchar2(100), hit_song_id number, 
foreign key(hit_song_id) references song(i_d));
--����


insert into song values (myrow.nextval,'dragon night',10000);
insert into song values (myrow.nextval,'��ȣ��',9000);
insert into song values (myrow.nextval,'let it be',8000);
insert into song values (myrow.nextval,'bad guy',7000);
insert into song values (myrow.nextval,'��ȫ�Ź�',5000);

select * from song;


--hit song�� ���߿� �߰��Ϸ��� �̷��� ���� �˰� �ִ� ����
-- �÷�(=��)�� ���´�. (�ƴ� ���� ����)
insert into singer(id,name) values(myseq.nextval, '�̹���');
insert into singer(id,name) values(myseq.nextval, '��ī�̳���͸�');
insert into singer(id,name) values(myseq.nextval, '����');

select * from singer;

update singer set hit_song_id=2 where id=1;
update singer set hit_song_id=1 where id=2;
update singer set hit_song_id=4 where id=3;

insert into singer values(myseq.nextval, '��Ʋ��', 3);

select name "������", title "�뷡��" from song join singer on song.i_d=singer.hit_song_id;

select name, title from song right join singer on song.i_d=singer.hit_song_id; --���� singer �� ���
select name, title from song left join singer on song.i_d=singer.hit_song_id;  --���� song �� ���






--alter table singer add(code varchar2(20));
--alter table studentclo add constraint fk_clo foreign key(code) references majors(code);

