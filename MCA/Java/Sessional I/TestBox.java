public class TestBox {
    public static void main(String[] args) {
        Box box1 = new Box(10);
        Box box2 = new Box(20, 10, 25);
        Box box3 = new Box(25);

        System.out.println("Box 1:");
        System.out.println(" Volume: " + box1.getVolume());
        System.out.println(" Surface area: " + box1.getSurfaceArea());
        System.out.println(" Is Cube: " + box1.isCube());

        System.out.println("Box 2:");
        System.out.println(" Volume: " + box2.getVolume());
        System.out.println(" Surface area: " + box2.getSurfaceArea());
        System.out.println(" Is Cube: " + box2.isCube());

        System.out.println("Box 3:");
        System.out.println(" Volume: " + box3.getVolume());
        System.out.println(" Surface area: " + box3.getSurfaceArea());
        System.out.println(" Is Cube: " + box3.isCube());
    }
}
