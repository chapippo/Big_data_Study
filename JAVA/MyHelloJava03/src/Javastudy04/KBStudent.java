package Javastudy04;

public class KBStudent extends Student {
	
	private String gender;
	private String education;
	private int attend;
	
	
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public String getEducation() {
		return education;
	}
	public void setEducation(String education) {
		this.education = education;
	}	
	
	public void Attend(int attend) {
		if(attend == 1) {
			System.out.println("이름: "+getName()+"/나이: "+getAge()+"/성별: "+getGender()+"/학력: "
					+getEducation()+"/현재 입실");
		}
		else {
			System.out.println("이름: "+getName()+"/나이: "+getAge()+"/성별: "+getGender()+"/학력: "
					+getEducation()+"/퇴실");
		}
		
	}
	
}



