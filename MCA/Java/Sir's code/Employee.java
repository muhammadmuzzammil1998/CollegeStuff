package in.ac.jh;

public class Employee {
	
private String name;
private int age;
private String designation;
private String employeeId;
private Employee e=null;
public Employee getE() {
	return e;
}


public Employee() {
	// TODO Auto-generated constructor stub
}



public  Employee(String name, int age, String employeeId, int pFAccountNo, String projectAssociateWith) {
	this.name = name;
	this.age = age;
	this.employeeId = employeeId;
	this.pFAccountNo = pFAccountNo;
	this.projectAssociateWith = projectAssociateWith;
}


public  Employee(String name, int age, String employeeId,  String designation, String projectAssociateWith) {

	this.name = name;
	this.age = age;
	this.designation = designation;
	this.employeeId = employeeId;
	this.projectAssociateWith = projectAssociateWith;
}


public Employee(String name, int age, String employeeId) {
	
	this.name = name;
	this.age = age;
	this.employeeId = employeeId;
}
private int pFAccountNo;
private String projectAssociateWith;


public Employee(String name, String employeeId) {
	
	this.name = name;
	this.employeeId = employeeId;
}




public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public int getAge() {
	return age;
}
public void setAge(int age) {
	this.age = age;
}
public String getDesignation() {
	return designation;
}
public void setDesignation(String designation) {
	this.designation = designation;
}
public int getpFAccountNo() {
	return pFAccountNo;
}
public void setpFAccountNo(int pFAccountNo) {
	this.pFAccountNo = pFAccountNo;
}
public String getProjectAssociateWith() {
	return projectAssociateWith;
}
public void setProjectAssociateWith(String projectAssociateWith) {
	this.projectAssociateWith = projectAssociateWith;
}
public String getEmployeeId() {
	return employeeId;
}

 
}