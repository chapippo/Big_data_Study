import java.util.Scanner;

public class joon2153 {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		
		String Arrs = s.next();
		char[] arr = Arrs.toCharArray();
		int check = 1;
		int sum = 0;
		
		for(int i=0;i<Arrs.length();i++) {
			char sosu = arr[i];		
			if(sosu>=65 && sosu<=90) {
				sosu -=38;
			}
			else if(sosu>=97 && sosu<=122) {
				sosu -=96;
			}
			sum += sosu;
		}
		for(int i=2;i<sum;i++) {
			if(sum % i == 0)
				check = 0;
		}
		if(check==1) {
			System.out.println("It is a prime word.");
		}
		else {
			System.out.println("It is not a prime word.");
		}
	}
}

