import java.util.Scanner;

public class joon2588 {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		
		int n1 = s.nextInt();
		int n2 = s.nextInt();
		
		int n3 = n1*(n2%10);
		int n4 = n1*(n2%100/10);
		int n5 = n1*(n2/100);
		
		System.out.println(n3);
		System.out.println(n4);
		System.out.println(n5);
		System.out.println(n1*n2);
	}
}
