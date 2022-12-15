delimiter $$	
				/*nextval : currval+1을 리턴*/
create function nextval (the_name varchar(32))
returns bigint unsigned 
modifies sql data 
deterministic 
begin 
declare ret bigint unsigned;
update sequences set currval = currval+1 where name=the_name;
select currval into ret from sequences where name = the_name limit 1;
/*올려준 값을 ret이라는 변수에 넣어준다*/
return ret;
end
