package Javastudy05_answer;

//Ŭ�������� ù���ڰ� �빮���ΰ� ��������̴�.
//�ҹ��ڷ� ���´ٰ� �� ���ư��� �� �ƴ�
public class Cuboid extends Javastudy01.Rectangle_sol{
	
	//������ ȣ���ϰ� �Ǹ�
	//super Ű���� �̿��ؼ� ��������� �θ�Ŭ���� ���� �� �ص�..
	//�θ�Ŭ������ �����ڸ� ������ ȣ����	
	public Cuboid() {
//		super();	//�̷������� ��������� ���� �ʾƵ�..
	}				//super �� �ڵ尡 �Ϲ������� ��
	
	private int z;

	public int getZ() {
		return z;
	}

	public void setZ(int z) {
		this.z = z;
	}
	
	public int getCuboidVolume() {
		return getW()*getH()*z;
	}

}
