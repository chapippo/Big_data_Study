import java.util.Scanner;

public class HelloWorld02 {
	public static void main(String args[]) {
	Scanner s/*아무렇게 줄임*/ = new Scanner(System.in);
	
	//System.out.println(s_str);


	String name = s.next();
	int year = s.nextInt();
	s.nextLine();	//입력된 enter키 없애기
	String say = s.nextLine();	
	
	
	System.out.println("Hello World, " +name+ "!");
	System.out.println("You are learning Java with "+year);	
	System.out.println("당신의 각오를 말해보세요.");		
	System.out.println(say);
	}
}
