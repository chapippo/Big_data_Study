import java.util.Scanner;

public class Quiz0802 {
	public static void main(String args[]) {
		//이름, 이번해 년도, 각오 입력받고
		//아래 양식처럼 출력하기
		//Hello World, <본인 이름>!
		//You are learning Java with <이번해 년도>
		//당신의 각오를 적어보세요.
		//<각오(아무말)>
		
		Scanner s=new Scanner(System.in);
		String name=s.next();
		int year=s.nextInt();
		s.nextLine();
		String say=s.nextLine();
		
		System.out.println("Hello World, "+name);
		System.out.println("You are learning Java with "+year);
		System.out.println("당신의 각오를 말해주세요.");
		System.out.println(say);
	}
}