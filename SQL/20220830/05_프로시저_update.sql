-- UPDATE
--OR REPLACE를 빼먹으면 삭제하고 오타수정 후 다시 만들거나
--GUI에서 수정해줘야 한다.
CREATE PROCEDURE UPDATE_PERSON
(
MYNUM IN INT,
CHANGENAME VARCHAR2 
)
IS TEMPVAR VARCHAR2(20) := '학생';
BEGIN TEMPVAR := CHANGENAME || TEMPVAR; 
UPDATE SIMPLE_TEST_TABLE SET NAME=TEMPVAR WHERE 
NUM=MYNUM;
END UPDATE_PERSON;
-- || 기호는 글자 이어붙이기