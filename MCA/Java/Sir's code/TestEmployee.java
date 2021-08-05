package in.ac.jh;

public class TestEmployee {

	public static void main(String[] args) {
		// TODO Auto-generated method stu
		Employee amit = new Employee("Amit Singh",36, "12376543");
		
		Employee shah = new Employee("Shah Imran Alam", 40, "123876","Senior Software Engineer","People Management Oracle" );
		Employee emp1=new Employee();
		//Employee test= new Employee("Shah");
	
		//Employee xyz= new Employee(shah);
		System.out.println(amit.getName());
		System.out.println(amit.getAge());
		System.out.println(amit.getDesignation());
		
		
		String str=new String("Shah imran Alam");
		
		String str1="Imran";
		Float f;
		Integer intValue=5;
		Integer intValue1=new Integer(5);
		boolean b;
		Boolean b1;
		


		System.out.println(shah.getName());
		System.out.println(shah.getAge());
		shah.setDesignation("Senior Consultant");
		System.out.println(shah.getDesignation());
		System.out.println("Employee Id :-"+shah.getEmployeeId());
		
		
		
	}

}
