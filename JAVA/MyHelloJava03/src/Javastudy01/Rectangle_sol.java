package Javastudy01;
//���簢��
public class Rectangle_sol {
	
	//w�� h�� �ν��Ͻ����� ���� �ٸ���.
	//�̰� "�ν��Ͻ� ����"��� ��
	private int w;
	private int h;
	
	
	//���� ���� (Getter Setter)
	//private�� ��� ����(=�Ӽ�)�� ������ �� ����.
	//alt shift s ������ r Ű
	public int getW() {
		return w;
	}
	public void setW(int w) {
		if(w<=0)	//0 ������ �� ����ó��
		{
			System.out.println("����!(w)");
			this.w = 0;
			return; // setW�� �����Ŵ
		}
		this.w = w;
	}
	
	public int getH() {
		return h;
	}
	public void setH(int h) {
		if(h<=0)
		{
			System.out.println("����!(h)");
			this.h = 0;
			return;
		}
		this.h = h;
	}
	
	
	
	
	//alt shift s + o
	public Rectangle_sol(int w, int h) {
		setW(w);
		setH(h);
		//this.w = w;
		//this.h = h;
	}
	
	//w�� h �ϳ��� �˾Ƽ� �ϳ��� �Է��ϴ� ��츦 ���簢������ �����غ���
	public Rectangle_sol(int wh) {
		setW(wh);
		setH(wh);
		//this.w = wh;
		//this.h = wh;
	}
	
	public Rectangle_sol() {
		System.out.println("�׸� Ŭ���� ���� !");

	}
	
	
	//�޼ҵ� ����	
	//"�ν��Ͻ� �޼ҵ�"
	//�ν��Ͻ� ���� �����ϴ� �� �ٸ���.
	public int getArea() {
		if(w<=0 || h<=0) 
		{
			System.out.println("Error!");
			return -1;
		}
		else if(w==h)
		{
			System.out.println("���簢���̾�!");
		}
		return w*h;
	}
}












