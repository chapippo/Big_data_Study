package my.hello.javastudy;

public class HelloJava01 {

	public static void main(String[] args) {
		// 로또 프로그램 짜보기
		// 6개 번호랑 보너스 번호 출력해주기
		// 1~5 사이에 값을 입력받아서 진짜 로또처럼
		// 번호 1개 ~ 5개 뽑아주는 거 해보기
		
		System.out.println("Hello World");
		System.out.println((int)(Math.random()*45)+1);
						//(int):강제로 형변환 ex)1.999999 -> 1
		
		
		int lotto[] = new int [6];
		
 	  	// 번호 생성
		for(int i=0; i<6; i++) {
		lotto[i] = (int)(Math.random() * 45) + 1;
        
   		  	 // 중복 번호 제거
		for(int j=0; j<i; j++) {
			if(lotto[i] == lotto[j]) {
				i--;
				break;
					}
				}
			}
			System.out.print("로또 번호: ");

				// 번호 출력
		for(int i=0; i<6; i++) {
			System.out.print(lotto[i] + " ");
			}				
	}
}
