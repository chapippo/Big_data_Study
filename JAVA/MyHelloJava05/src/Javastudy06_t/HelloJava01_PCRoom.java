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
		
		
		//초가스라는 변수에 익명 클래스 만듦
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
//			}    //하려면 Lol에다 추가해야 가능
			
			@Override
			public void W() {
				// TODO Auto-generated method stub
				System.out.println("흉포한 울부짖음");
			}
			
			@Override
			public void R() {
				// TODO Auto-generated method stub
				System.out.println("포식");
			}
			
			@Override
			public void Q() {
				// TODO Auto-generated method stub
				System.out.println("파열");
			}
			
			@Override
			public void E() {
				// TODO Auto-generated method stub
				System.out.println("날카로운 가시");
			}
		};
		chogas.Q();
		chogas.W();
		chogas.E();
		chogas.R();
		
		
		
		
		//Lol을 상속 받으면서
		new Lol() {
			
			//익명클래스에 있는 dance()를 호출하고 싶다면
			public void dance() {
				System.out.println("캐릭터가 춤을 춘다.");
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
		.dance();	//Lol 상속받은 익명 클래스에만 있는 dance
					//이렇게 인스턴스 만들자마자 호출하는 거 외엔 방법이 없음
					//아니면 Lol에도 dance 메소드를 만들어둬야 한다.

	}

}
