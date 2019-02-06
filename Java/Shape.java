public class Shape {
  int length, width;

  Shape(int length, int width) {
    this.length = length;
    this.width = width;
  }

  Shape(Shape s) {
    this.length = s.length;
    this.width = s.width;
  }

  int area() {
    return this.length * this.width;
  }

  public static void main(String[] args) {
    Shape rect = new Shape(20, 25);
    System.out.println(rect.area());
  }
}
