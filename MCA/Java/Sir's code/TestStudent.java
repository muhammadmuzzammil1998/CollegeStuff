package in.ac.jh;

import java.util.*;




public  class TestStudent {
	public static int x;
	public int y;

	public static void main(String[] args) {
Student amit=new Student("Shah", "MTECh", null);
Student azizi=new ForignStudents("Azizi", "MCA");


		System.out.println(Calculator.add(5, 6.7f));
		
		// TODO Auto-generated method stub
		printMessage();
		//Calculator calc=new Calculator();
		TestStudent student=new TestStudent();
		
		//demoNonStatic();
		student.y=6;
		x=7;
		
		//y=8; Compilation error
		
		
		//demoNonStatic(); // Compilation error

		//ArrayList<Integer> list1= new ArrayList<Integer>();
		/*
		 * List<Integer> list = new ArrayList<Integer>(); // Automatically grows and
		 * automatically shrinks int x=7; list.add(5); list.add(1, x); list.remove(5);
		 * 
		 * List<Integer> list1=new LinkedList<Integer>();
		 * 
		 * CollectionUtils cu=new CollectionUtils(); cu.sort(list); cu.sort(list1);
		 * 
		 * 
		 * 
		 * 
		 * for(Integer x1:list){ System.out.println(x1); }
		 */
		
		/*
		 * int [] a = {1,2,3,4};
		 * 
		 * Object [] a1= new Object[5];
		 * 
		 * a1[0]=1; a1[1]=new Float(3.4f); a1[2]="Imran"; a1[3]=new Object(); a1[4]=new
		 * Student("Shah Imran Alam", "ABC00112021"); //a1[5]=6;
		 * 
		 * for(Object x:a1) { System.out.println(x); }
		 */
		
			/*
			 * Student [] student = new Student[5];
			 * 
			 * 
			 * Student std1; std1=new Student("Shah imran Alam","JH-2021-16574");
			 * std1.setCourse("MCA"); std1.setAge(41); Address std1CommAdd=new
			 * Address("j67","abul fazal lane","jamia nagar","Sougth Delhi","Delhi","Indian"
			 * ,110025); Address std1PermAdd=new
			 * Address("h456","abul fazal lane","jamia nagar","Sougth Delhi","Delhi",
			 * "Indian",330018); std1.setCommunicationAddress(std1CommAdd);
			 * std1.setPermamnentAddress(std1PermAdd);
			 * 
			 * System.out.println(std1);
			 */





/*
 * System.out.println(std1CommAdd.toString());
 * 
 * System.out.println(std1PermAdd.toString());
 */


	}
	
	public static void printMessage() {
		String [] str={"Hello"};
		//main(str);
		System.out.println("Good morning");
	}
public void demoNonStatic() {
	TestStudent.printMessage();
	TestStudent.x=7;
	x=8;
	printMessage();
	
}
}
