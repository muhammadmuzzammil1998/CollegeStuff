package in.ac.jh;

public final class Student {
    private static int  testStsticVar;
	private String name;
	private String course;
	private int age;

	private Address communicationAddress;
	private Address permamnentAddress;
	private String enrolementNo;
	public final String UNIV_NAME="Jamia Hamadard";
	
	public static void  TestStaticMethod() {
		
		
		
	}
	
		
	@Override
	public  String  toString() {
		
		//UNIV_NAME="DU"; compilation
		return "Student [name=" + name + ",\n course=" + course + ",\n age=" + age + ",\n communicationAddress="
				+ communicationAddress + ",\n permamnentAddress=" + permamnentAddress + ",\n enrolementNo=" + enrolementNo
				+ "Student of "+UNIV_NAME+"]";
	}

	private Student(String name, String enrolementNo) {
		Student.testStsticVar=9;
		this.name = name;
		this.enrolementNo = enrolementNo;
	}

	public Student(String name, String course, String enrolementNo) {
		
		this(name,enrolementNo);
		this.enrolementNo = enrolementNo;
	}

	public Address getCommunicationAddress() {
		return communicationAddress;
	}

	public void setCommunicationAddress(Address communicationAddress) {
		this.communicationAddress = communicationAddress;
	}

	public Address getPermamnentAddress() {
		return permamnentAddress;
	}

	public void setPermamnentAddress(Address permamnentAddress) {
		this.permamnentAddress = permamnentAddress;
	}

	public String getEnrolementNo() {
		return enrolementNo;
	}

		
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getCourse() {
		return course;
	}

	public void setCourse(String course) {
		this.course = course;
	}

	public int getAge() {

		return age;
	}

	public void setAge(int age) {
		if (age < 22) {
			System.err.println("Invalid age: Age should be greater than 22");
		} else
			this.age = age;
	}

}
