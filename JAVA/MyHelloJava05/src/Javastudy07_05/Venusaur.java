package Javastudy07_05;

public class Venusaur extends Ivysaur {
	
	
	//�̻��ز��� �⺻�̵� ��ü(�ܼ��� Move�� ����)�� ��¦��¦..
	@Override
	public void Move() {
		// TODO Auto-generated method stub
		System.out.println("��� ¡�׷���.");
		super.Run();
	}
	
	@Override
	public void Grow() {
		// TODO Auto-generated method stub
		System.out.println("� �� �ڶ�");
	}

	@Override
	public void Charming() {
		// TODO Auto-generated method stub
		System.out.println("�ɲɲ� �̻��ز�~");
	}
}
