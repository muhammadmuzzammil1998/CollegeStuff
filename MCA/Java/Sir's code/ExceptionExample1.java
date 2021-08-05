import java.util.Scanner;

public class ExceptionExample1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter first operand");
		int operand1 = scan.nextInt();
		System.out.println("Enter second operand");
		int operand2 = scan.nextInt();
		
		float result=0.0f;
	try {
		result = operand1 / operand2;
	}catch(ArithmeticException e) {
		System.err.println("Operand 2 is zero. please reneter operand 2");
		System.out.println("Enter second operand");
		 operand2 = scan.nextInt();
		 result = operand1 / operand2;
	}
		result = result * 2;
		System.out.println("Result of the expresion : ((operand1)/operand2)X2 =" + result);
		scan.close();

	}

}
