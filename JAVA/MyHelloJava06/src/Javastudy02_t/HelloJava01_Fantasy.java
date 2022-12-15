package Javastudy02_t;

//awt พฦดิ @@@
import java.util.ArrayList;
import java.util.List;

public class HelloJava01_Fantasy {
	public static void main(String[] args) {
		List<Cryptid> fantasies = new ArrayList<Cryptid>();
		fantasies.add(new Dragon());
		fantasies.add(new Unicorn());
		fantasies.add(new Cryptid() {
			@Override
			public void sleep() {
				super.sleep();
			}
		});
	}
}
