package Javastudy02;

public class Worker {
	private String Name;	//이름
	private String cNum;	//사번
	
	public Worker(String name, String cNum) {
		super();
		Name = name;
		this.cNum = cNum;
	}
		
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public String getcNum() {
		return cNum;
	}
	public void setcNum(String cNum) {
		this.cNum = cNum;
	}
	

	//toString + ctrl space
	@Override
	public String toString() {
		return "이름 : "+Name+", 사번 : "+cNum;
	}
	
	
	//equals를 재정의했기 때문에 사번과 이름이 같은 사원은 같은 사원으로 간주함
	//equals + ctrl space
	@Override
	public boolean equals(Object obj) {
		Worker w = (Worker)obj;//(형변환)이러면) w랑 obj는 같은 곳을 가리킴
		return w.getcNum().equals(cNum) && w.getName().equals(Name);
	}
}










