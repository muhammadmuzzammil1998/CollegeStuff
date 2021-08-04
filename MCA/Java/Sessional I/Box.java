public class Box {
	private int edge;
	private int height;
	private int width;
	private int length;

	Box(int edge) {
		this.edge = edge; // All edges are same for a cube.
	}

	Box(int length, int height, int width) {
		this.edge = -1; // Negative value for edge represents a cuboid;
		// We shall use other data members for cuboid.
		this.length = length;
		this.height = height;
		this.width = width;
	}

	public double getVolume() {
		if (this.isCube()) {
			return Math.pow(edge, 3);
		}
		return length * height * width;
	}

	public boolean isCube() {
		return this.edge > 0; // Negative value for edge represents a cuboid;
	}

	public double getSurfaceArea() {
		if (this.isCube()) {
			return 6 * Math.pow(edge, 2); // Surface area of Cube is 6a^2
		}
		return 2 * ((length * width) + (width * height) + (length * height)); // Surface area of Cuboid is 2(lw+wh+lh)
	}
}
