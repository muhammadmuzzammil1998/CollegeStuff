import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class ExceptionDemoIndexOutOfBoundExcep {
	 static char c;
	public static void main(String[] args) throws FileNotFoundException {
	String name="Shah Imran Alam";
	int [] intArray={1,2,3,4,5,6,7,8,9,0};
	Scanner scan=new Scanner(System.in);
	System.out.println("Enter index value for charector in String");
	int index=scan.nextInt();
	
	knowCharAtGivenIndex(name,index);
		System.out.println("Enter index value for array of integers");
		int intIndex=scan.nextInt();	
		
		knowIntAtGivenIndex(intArray,intIndex);
	
		// TODO Auto-generated method stub

	}
	
 static  void knowCharAtGivenIndex(String s,int index) throws FileNotFoundException{
	
	 String fileName = "c:\\temp.txt";
	 FileReader fileReader=null;
	 
		fileReader = new FileReader(fileName);
	  c=s.charAt(index);
	 	System.out.println("Charector at index "+index+" is "+c);
		
		
	}
 static void knowIntAtGivenIndex(int [] intArray,int index){
	 
	 	 System.out.println("Integer value at index "+index+" is "+intArray[index]);
	 
 }

}
