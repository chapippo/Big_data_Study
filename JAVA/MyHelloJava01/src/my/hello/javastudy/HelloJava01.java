package my.hello.javastudy;

public class HelloJava01 {

	public static void main(String[] args) {
		// �ζ� ���α׷� ¥����
		// 6�� ��ȣ�� ���ʽ� ��ȣ ������ֱ�
		// 1~5 ���̿� ���� �Է¹޾Ƽ� ��¥ �ζ�ó��
		// ��ȣ 1�� ~ 5�� �̾��ִ� �� �غ���
		
		System.out.println("Hello World");
		System.out.println((int)(Math.random()*45)+1);
						//(int):������ ����ȯ ex)1.999999 -> 1
		
		
		int lotto[] = new int [6];
		
 	  	// ��ȣ ����
		for(int i=0; i<6; i++) {
		lotto[i] = (int)(Math.random() * 45) + 1;
        
   		  	 // �ߺ� ��ȣ ����
		for(int j=0; j<i; j++) {
			if(lotto[i] == lotto[j]) {
				i--;
				break;
					}
				}
			}
			System.out.print("�ζ� ��ȣ: ");

				// ��ȣ ���
		for(int i=0; i<6; i++) {
			System.out.print(lotto[i] + " ");
			}				
	}
}
