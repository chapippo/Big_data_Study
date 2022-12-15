delimiter $$
/*currval 이름의 함수를 만듦*/
create function currval (the_name varchar(32))
returns bigint unsigned 
modifies sql data 
deterministic
begin
/* declare 변수 선언 -> ret이라는 변수 선언 */
declare ret bigint unsigned;
/* currval 값을 가져올 거고 (limit 1) 값을 하나만 가져올 거 */
select ifnull(max(currval),1) into ret from sequences where name=the_name limit 1;
return ret;
end;