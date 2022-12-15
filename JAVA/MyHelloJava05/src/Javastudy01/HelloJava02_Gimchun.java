package Javastudy01;

public class HelloJava02_Gimchun {

	public static void main(String[] args) {
		
		Food_sol f1 = new Food_sol("쫄면",5000);
		Food_sol f2 = new PorkCutlet("생선까스",8000);	//다형성 이용 / Food_sol이지만 PorkCutlet으로 인스턴스를 만들었다
		PorkCutlet f3 = new PorkCutlet("돈까스",9000);
		
		Food_sol f4 = new Pasta("알레오올리오",7000);
		
		f1.eat();	//Food 클래스의 eat 호출
		f2.eat();	//f2랑 f3는 (PorkCutlet에서 인스턴스를 만들었기 때문에) 
		f3.eat();	//PorkCutlet의 eat()을 호출
		
		
		if(f2 instanceof PorkCutlet)
		{
			((PorkCutlet)f2).eat(5);	//PorkCutlet을 쓰고 싶으면 형변환 필요
		}
		if(f2 instanceof PorkCutlet)
		{
			((PorkCutlet)f2).eat("초고추장");
		}
		
		f3.eat(10);	//f3는 PorkCutlet으로 만들었기 때문에 바로 가능
		f3.eat("초콜릿");
		System.out.println("-----");
		if(f4 instanceof Pasta)
		{
			((Pasta)f4).eat();
		}
	}

}
