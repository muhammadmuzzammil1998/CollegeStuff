public class Square {
	private double edge; // All edges are same in a square. Therefore, a single variable.

	// Concept: Constructor
	// Used to create a square which takes 3 triangle class object references.
	Square(Triangle t1, Triangle t2, Triangle t3) {
		// If side triangles' base is not same as t2 base. Cannot form square.
		if (t1.getBase() + t3.getBase() != t2.getBase()) {
			System.err.println("Unable to form square. T1 + T3 base differs from T2 base.");
			return;
		}

		// If side triangles' perpendicular are not same. Cannot form square.
		if (t1.getPerpendicular() != t3.getPerpendicular()) {
			System.err.println("Unable to form square. T1 and T3 perpendicular differs.");
			return;
		}

		// For checking edges
		double leftEdge = t1.getPerpendicular();
		double bottomEdge = t1.getBase() + t3.getBase();
		double rightEdge = t3.getPerpendicular();
		double topEdge = t2.getBase();

		// Each edge should be equal to form a square.
		if (leftEdge == rightEdge && topEdge == bottomEdge) {
			System.out.println("All sides are equal. Succesfully generated a square with triangles.");
			edge = leftEdge;
		}
	}

	// Returns area of square in context;
	public double area() {
		return Math.pow(edge, 2);
	}

	// Returns perimeter of square in context;
	public double perimeter() {
		return 4 * edge;
	}
}
