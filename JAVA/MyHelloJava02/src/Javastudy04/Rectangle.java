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
			System.out.println("값은 -가 될 수 없음");
			return -1;
		}
		else if(w==h) {
			System.out.println("w와 h 값이 같으면 정사각형");
			return w*h;
		}
		return w*h;
	}

}









