--����� ������ Ȯ�� �� �߰�
select * from simple_test_table;
exec add_person(5,'�̵���','010-5517-1234');
exec add_person(6,'�̵���','010-2517-1234');
exec add_person(7,'�̵���','010-3517-1234');

/
--select ���ν��� ȣ��
var o_cursor refcursor 
exec person_select('�̵���', :o_cursor)
print o_cursor;


-- ����->ȯ�漳��->ǥ��->���鹮��
-- ���� �����ϱ�
