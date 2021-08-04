public class Triangle {
	// Concept: Data Hiding
	// These variables are only set using constructor and can be read via getters.
	private double hypotenuse;
	private double base;
	private double perpendicular;

	// Concept: Constructor overloading
	// Used if all edges of a triangle are same, then use the same edge for all
	// variables.
	Triangle(double edge) {
		this.base = edge;
		this.hypotenuse = edge;
		this.perpendicular = edge;
	}

	// Concept: Constructor overloading
	// Used if edges of triangle are different.
	Triangle(double base, double hypotenuse, double perpendicular) {
		this.base = base;
		this.hypotenuse = hypotenuse;
		this.perpendicular = perpendicular;
	}

	// Returns area of triangle in context;
	public double area() {
		return 0.5 * base * perpendicular;
	}

	// Returns perimeter of triangle in context;
	public double perimeter() {
		return base + hypotenuse + perpendicular;
	}

	// Getters for private variables.
	public double getHypotenuse() {
		return hypotenuse;
	}

	public double getBase() {
		return base;
	}

	public double getPerpendicular() {
		return perpendicular;
	}
}