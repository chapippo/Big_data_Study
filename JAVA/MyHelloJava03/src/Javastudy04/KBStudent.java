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
			System.out.println("�̸�: "+getName()+"/����: "+getAge()+"/����: "+getGender()+"/�з�: "
					+getEducation()+"/���� �Խ�");
		}
		else {
			System.out.println("�̸�: "+getName()+"/����: "+getAge()+"/����: "+getGender()+"/�з�: "
					+getEducation()+"/���");
		}
		
	}
	
}



