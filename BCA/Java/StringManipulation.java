public class StringManipulation {
  public static void main(String[] args) {
    String str = "   muz   za  mmil  ";
    String output;

    // a
    output = str.replaceAll(" ", "");
    System.out.println("Removed spaces:\t\t" + output);

    // b
    output = output.toUpperCase();
    System.out.println("Changed case:\t\t" + output);

    // c
    output = "My name is ".concat(output);
    System.out.println("Concatenated strings:\t" + output);

    // d
    System.out.println("Z is located at:\t" + output.indexOf("Z", 0));
  }
}