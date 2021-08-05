
public class NullpointerExceptionDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
String s="World";

try {
System.out.println("The charector at index 5 is "+s.charAt(10)); // garded region

  }catch(NullPointerException ex) { s="Hello";
  System.out.println("The charector at index 5 is "+s.charAt(4));
  
  }catch(StringIndexOutOfBoundsException exception) {
	exception.printStackTrace();  
	  
  int size=s.length();
  System.out.println("The last charector is "+s.charAt(size-1));
  
  }
 

System.out.println("After try-catch block");

	}

}
