package in.ac.jh;

public class TestCalculator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Calculator calc=new Calculator();
System.out.println(calc);
int sum=calc.add(3);
System.out.println(sum);
float sumf=calc.add(2.7f,3);
System.out.println(sum);
sum=calc.add(2,3,4);
System.out.println(sum);



calc.add(2,3,4);

	}

}
