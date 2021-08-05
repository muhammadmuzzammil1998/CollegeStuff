import java.io.FileNotFoundException;
import java.util.InputMismatchException;
import java.util.Scanner;

public class ExceptionHandlingDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner scan = new Scanner(System.in);
Scanner scan1=new Scanner(System.in);

int a=0;
int b=0;
float result=0;
System.out.println("Enter two numbers");

a=scan.nextInt();
System.out.println("You entered "+a);

b=scan1.nextInt();
System.out.println("You entered "+b);

a=a+3;
System.out.println("a="+a);

try{
result=a/b;
}catch(ArithmeticException e){
	b=2;
	result=a/b;
}

System.out.println("Final result ="+result);

System.out.println("After Exception handle");
	}

}
