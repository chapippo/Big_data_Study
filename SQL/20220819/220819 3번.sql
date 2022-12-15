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


--¾ê´Â fk°¡ 2°³, book, customer¿¡¼­ °¡Á®¿È
create table orders (
orderid number primary key,
custid number,
bookid number,
orderdate date default sysdate,
foreign key (custid) references customer(custid),
foreign key (bookid) references book(bookid)
);












