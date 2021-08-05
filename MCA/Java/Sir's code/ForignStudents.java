package in.ac.jh;

public class ForignStudents extends Student {
	String natioanlity;

	public ForignStudents(String name, String enrolementNo) {
				
		super(name, enrolementNo,null);
		
		
		
		// TODO Auto-generated constructor stub
	}
public  String toString() {
		String
		//UNIV_NAME="DU"; compilation
		return "Student [name=" + getName() + ",\n course=" + getCourse() + ",\n age=" + getAge() + ",\n communicationAddress="
				+ getCommunicationAddress() + ",\n permamnentAddress=" + getPermamnentAddress() + ",\n enrolementNo=" + getEnrolementNo()
				+ "Natinality="+natioanlity+"Student of "+UNIV_NAME+"]";
	}
	

}
