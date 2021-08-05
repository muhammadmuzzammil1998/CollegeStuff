import java.util.Scanner;


public class ExceptionExample2 {
	static int  operand1;
	static int operand2;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
		float result=0f;
		
		System.out.println("Enter first operand");
		operand1=Integer.parseInt(scan.next());
		System.out.println("Enter second operand");
		operand2=Integer.parseInt(scan.next());
		// Un-Checked Exception or runtime exception
		result=operand1/operand2;
		
		operand1=operand1+5;
		result=result*2;
		System.out.println("Result of the expresion : (operand1/operand2)X2 ="+result);
			scan.close();
			


	}

}
