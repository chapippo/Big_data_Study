package Javastudy02;

public class GameCharacter {
	private String id;
	private String job;
	private double level;
	private static int count;
	
	
	public static int getCount() {return count;}
	
	public String getId() {
		return id;
		}
	public void setId(String id) {this.id = id;}
	public String getJob() {return job;}
	public void setJob(String job) {this.job = job;}
	
	
	public GameCharacter(String id, String job) {
		this.id = id;
		this.job = job;
		count++;
	}
	
	public GameCharacter() {
		count++;
	}
	
	public void SayAttack() {
		if(job=="전사") {
			System.out.println("직업:"+job+"");
		}
	}
	
}













