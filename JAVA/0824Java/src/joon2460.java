import java.util.Scanner;

public class joon2460 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int out = s.nextInt();
		int get = s.nextInt();
		int people = get-out;
		int max = people;
		
		for(int i=0;i<9;i++) {
			out = s.nextInt();
			get = s.nextInt();
			people += get-out;
			if(people>max) {
				max = people;
			}
		}
		System.out.println(max);
	}
}
