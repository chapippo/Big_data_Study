package Javastudy04;

public class Rectangle {
	private int w;
	private int h;
	
	public int getW() {
		return w;
	}
	public void setW(int w) {
		this.w = w;
	}
	public int getH() {
		return h;
	}
	public void setH(int h) {
		this.h = h;
	}
	
	
	public Rectangle() {
		
	}	
	public Rectangle(int w) {
		this.w = w;
	}
//	public Rectangle(int h) {
//		this.h = h;
//	}
	public Rectangle(int w, int h) {
		this.w = w;
		this.h = h;
	}
	
	public int getArea() {
		if(w==0) {
			System.out.println("���� -�� �� �� ����");
			return -1;
		}
		else if(w==h) {
			System.out.println("w�� h ���� ������ ���簢��");
			return w*h;
		}
		return w*h;
	}

}









