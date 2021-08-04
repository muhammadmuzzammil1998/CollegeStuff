public class TestSquareAndTriangle {

	public static void main(String[] args) {

		// Creating 3 Triangles
		Triangle t1 = new Triangle(2, 5, 5);
		Triangle t2 = new Triangle(5); // Use of constructor overloading
		Triangle t3 = new Triangle(3, 5, 5);

		// Creating square with 3 triangles
		Square s = new Square(t1, t2, t3);

		System.out.println(" Perimeter of square: " + s.perimeter());
		System.out.println(" Perimeter of T1: " + t1.perimeter());
		System.out.println(" Perimeter of T2: " + t2.perimeter());
		System.out.println(" Perimeter of T3: " + t3.perimeter());

		// Verification
		double sumOfTriangleArea = t1.area() + t2.area() + t3.area();

		System.out.println("Proof by area sum:");
		System.out.println(" Area of square: " + s.area());
		System.out.println(" Area of T1: " + t1.area());
		System.out.println(" Area of T2: " + t2.area());
		System.out.println(" Area of T3: " + t3.area());
		System.out.print(" Sum of triangle area: ");
		System.out.println(sumOfTriangleArea);

		if (sumOfTriangleArea == s.area()) {
			System.out.println("Verified! A square is generated!");
		} else {
			System.out.println("Error. Unable to verify.");
		}

		new Square(t2, t2, t2); // This won't create a square as conditions are not met.
	}

}