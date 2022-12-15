create table Book (
bookid number primary key,
bookname varchar2(40),
publisher varchar2(40),
price number);

create table customer (
custid number primary key,
name varchar2(40),
address varchar2(50),
phone varchar2(20));


--��� fk�� 2��, book, customer���� ������
create table orders (
orderid number primary key,
custid number,
bookid number,
orderdate date default sysdate,
foreign key (custid) references customer(custid),
foreign key (bookid) references book(bookid)
);












