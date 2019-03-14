class Shape {
  Shape(int side) {
    System.out.println(" Assuming a square");
    System.out.println("   Area: " + Math.pow(side, 2));
  }

  Shape(int edge, boolean is3D) {
    System.out.println(" Assuming a cube");
    System.out.println("   Volume: " + Math.pow(edge, 3));
  }

  Shape(int length, int width) {
    System.out.println(" Assuming a rectangle");
    System.out.println("   Area: " + length * width);
  }

  Shape(int length, int width, int height) {
    System.out.println(" Assuming a cuboid");
    System.out.println("   Volume: " + length * width * height);
  }
}

class Polymorphism {
  public static int add(int a, int b) {
    return a + b;
  }

  public static String add(String a, String b) {
    return a.concat(b);
  }

  public static void main(String[] args) {
    System.out.println("Function overloading");
    System.out.println(" Adding as numbers");
    System.out.println("   3 + 5 = " + add(3, 5));
    System.out.println(" Adding as strings");
    System.out.println("   3 + 5 = " + add("3", "5"));

    System.out.println();

    System.out.println("Constructor overloading");
    new Shape(3);
    new Shape(3, true);
    new Shape(3, 4);
    new Shape(3, 4, 2);
  }
}