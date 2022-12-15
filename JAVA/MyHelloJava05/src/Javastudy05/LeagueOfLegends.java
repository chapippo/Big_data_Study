package Javastudy05;

public abstract class LeagueOfLegends {
	private String Name;
	private String Runeterra;
	
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public String getRuneterra() {
		return Runeterra;
	}
	public void setRuneterra(String runeterra) {
		Runeterra = runeterra;
	}
	
	public abstract void Q();
	public abstract void W();
	public abstract void E();
	public abstract void R();	
	
}
