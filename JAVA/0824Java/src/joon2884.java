import java.util.Scanner;

public class joon2884 {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);		
		int H=s.nextInt();
		int M=s.nextInt();

		if(H==0) {
			if(M<45) {
				H=23;
				M=M+15;
				System.out.print(H+" "+M);
			}
			else if(M>=45) {
				M=M-45;
				System.out.print(H+" "+M);
			}
		}
		else if(H>0) {
			if(M<45) {
				H=H-1;
				M=M+15;
				System.out.print(H+" "+M);
			}
			else if(M>=45) {
				M=M-45;
				System.out.print(H+" "+M);
			}
		}
	}
}
