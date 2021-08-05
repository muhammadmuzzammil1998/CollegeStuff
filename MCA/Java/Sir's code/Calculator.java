package in.ac.jh;

public class Calculator {
	
	
	
	
	public static int add(int ... x) { // vararg syntax
		int sum=0;
		for(int i=0;i<x.length;i++) {
			sum=sum+x[i];
		}
		return sum; 
		
	}
	

public static float add(float x, float y) {
	return x+y;
}



public static float add(float x, int y) {

	return x+y;
}
public static float add(int x, float y) {
	return x+y;
}

public float multiply(float x,float y) {
	return x*y;
}
}
