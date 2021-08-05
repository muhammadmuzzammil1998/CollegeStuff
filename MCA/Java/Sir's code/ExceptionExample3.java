import java.io.IOException;

import org.graalvm.compiler.hotspot.stubs.OutOfBoundsExceptionStub;


public class ExceptionExample3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try {
			stringIndexChar();
		arrayTraversal();
		
		}catch(StringIndexOutOfBoundsException ex) {
			ex.printStackTrace();
			System.out.println("Catchbloack3");
		}
		
		//   throw new IllegalArgumentException();
		//throw new IOException();
		
		
	}

	private static void stringIndexChar() {
		String name="Shah Imran Alam";
		System.out.println(name.charAt(20));
	}

	private static void arrayTraversal() {
		int intArray[]={1,2,3,4};
		
		
		for(int i=0;i<5;i++){
			//if(i<intArray.length){
			System.out.println(intArray[i]);
			//}else{
		//		System.out.println("Error : Array index is out of bound");
		//	}
		}
	}

}
