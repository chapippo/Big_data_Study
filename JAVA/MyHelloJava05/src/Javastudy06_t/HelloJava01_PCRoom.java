package Javastudy06_t;

public class HelloJava01_PCRoom {

	public static void main(String[] args) {
		
		Drmundo d = new Drmundo();
		d.Q();
		d.W();
		d.E();
		d.R();
		Cogmo c = new Cogmo();
		c.Q();
		c.W();
		c.E();
		c.R();
		c.passive();
		
		
		//�ʰ������ ������ �͸� Ŭ���� ����
		Lol chogas = new Lol() {
			
//			private int size;
//			
//			public int getSize() {
//				return size;
//			}
//
//			public void setSize(int size) {
//				this.size = size;
//			}
//
//			public void stack() {
//				size++;
//			}    //�Ϸ��� Lol���� �߰��ؾ� ����
			
			@Override
			public void W() {
				// TODO Auto-generated method stub
				System.out.println("������ ���¢��");
			}
			
			@Override
			public void R() {
				// TODO Auto-generated method stub
				System.out.println("����");
			}
			
			@Override
			public void Q() {
				// TODO Auto-generated method stub
				System.out.println("�Ŀ�");
			}
			
			@Override
			public void E() {
				// TODO Auto-generated method stub
				System.out.println("��ī�ο� ����");
			}
		};
		chogas.Q();
		chogas.W();
		chogas.E();
		chogas.R();
		
		
		
		
		//Lol�� ��� �����鼭
		new Lol() {
			
			//�͸�Ŭ������ �ִ� dance()�� ȣ���ϰ� �ʹٸ�
			public void dance() {
				System.out.println("ĳ���Ͱ� ���� ���.");
			}
			
			@Override
			public void W() {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void R() {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void Q() {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void E() {
				// TODO Auto-generated method stub
								
			}
		}
		.dance();	//Lol ��ӹ��� �͸� Ŭ�������� �ִ� dance
					//�̷��� �ν��Ͻ� �����ڸ��� ȣ���ϴ� �� �ܿ� ����� ����
					//�ƴϸ� Lol���� dance �޼ҵ带 �����־� �Ѵ�.

	}

}
