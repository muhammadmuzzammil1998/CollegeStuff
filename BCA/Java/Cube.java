class Cube {
  private double edge;

  Cube(double edge) {
    this.edge = edge;
  }

  public double getBaseArea() {
    return Math.pow(this.edge, 2);
  }

  public double getVolume() {
    return this.getBaseArea() * this.edge;
  }

  public static void main(String[] args) {
    Cube c = new Cube(7);
    System.out.println(c.getBaseArea());
    System.out.println(c.getVolume());
  }
}