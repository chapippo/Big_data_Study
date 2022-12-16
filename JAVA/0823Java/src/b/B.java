package b;
import java.util.Scanner;
import a.*;

public class B extends A{
	public static void main(String args[]) {
		// import 통해서 외부 패키지를 포함하면
		// 외부 클래스에 대한 객체 생성 가능
		B b=new B(); 
		
		b.pub=1;
		// public 정상 접근
		//b.pri=2;
		// private 비정상 접근
		b.pro=3;
		// protected 비정상 접근
	}
}
