import java.util.Scanner;

public class LCMHCM {
  public static int LCM(int a, int b) {
    int large = Math.max(a, b);
    int small = Math.min(a, b);
    int i = large;
    while (true) {
      if (i % small == 0) {
        break;
      }
      i += large;
    }
    return i;
  }

  public static int HCF(int a, int b) {
    if (b == 0)
      return a;
    return HCF(b, a % b);
  }

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int a, b;
    System.out.print("Enter number 1: ");
    a = Integer.parseInt(input.next());
    System.out.print("Enter number 2: ");
    b = Integer.parseInt(input.next());
    System.out.println("LCM of " + a + " and " + b + " = " + LCM(a, b));
    System.out.println("HCM of " + a + " and " + b + " = " + HCF(a, b));
    input.close();
  }
}