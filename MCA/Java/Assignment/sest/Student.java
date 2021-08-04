package cse.sest;

public class Student {
	String enroll;
	String name;
	String gender;
	String course;
	Address communicationAddress;
	Address permanentAddress;
	int age;

	public Student(String name, String gender, String course, int age, Address permanentAddress) {
		this.name = name;
		this.gender = gender;
		this.course = course;
		this.age = age;
		this.permanentAddress = permanentAddress;
		this.communicationAddress = permanentAddress;
	}

	public String getEnroll() {
		return enroll;
	}

	public String getName() {
		return name;
	}

	public String getGender() {
		return gender;
	}

	public String getCourse() {
		return course;
	}

	public int getAge() {
		return age;
	}

	public Address getCommunicationAddress() {
		return communicationAddress;
	}

	public Address getPermanentAddress() {
		return permanentAddress;
	}

	public void setEnroll(String enroll) {
		this.enroll = enroll;
	}

	public void setCourse(String course) {
		this.course = course;
	}

	public void setCommunicationAddress(Address communicationAddress) {
		this.communicationAddress = communicationAddress;
	}

	@Override
	public String toString() {
		return String.format("%s\t%s\n%s  (%d years old)\nCourse: %s\nPermanent Address: %s\nCommunication Address: %s",
				name, enroll, gender, age, course, permanentAddress, communicationAddress);
	}
}
