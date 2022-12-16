import java.util.Scanner;

public class HelloWorld04 {
	public static void main(String args[]) {
		
		System.out.print("소문자 알파벳을 입력하세요");
		Scanner alpha = new Scanner(System.in);
		String str = alpha.nextLine();
		
		int alphabet[] = new int[26]; //알파벳 배열 26개 생성
				
		for(int i = 0; i < str.length(); i++) {
			char alp = str.charAt(i);
			alphabet[alp - 'a']++;
		}
		
		for(int i = 0; i < alphabet.length; i++) {
			System.out.println((char)(97+i) + " : " + alphabet[i]);			
		}
		
		
		
		
		System.out.println("어떤 계절인지 알아보고 싶은 달은?");
		
	}
}