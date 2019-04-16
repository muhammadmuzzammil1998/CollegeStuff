import java.util.Scanner;

final class InvalidOperationException extends Exception {
  private static final long serialVersionUID = -108287398808795809L;

  final public String getMessage() {
    return "Invalid operator. Use one from the list.";
  }
}

public class TryCatch {
  public static void main(String[] args) throws InvalidOperationException {
    double a, b;
    int opt;
    Scanner scanner = new Scanner(System.in);
    System.out.println("1. Add\n2. Substract\n3. Multiply\n4. Divide");
    try {
      System.out.print("Enter number a: ");
      a = scanner.nextDouble();
      System.out.print("Enter number b: ");
      b = scanner.nextDouble();
      System.out.print("Select operation: ");
      opt = scanner.nextInt();
      System.out.print("Result: ");
      switch (opt) {
      case 1:
        System.out.print(a + b);
        break;
      case 2:
        System.out.print(a - b);
        break;
      case 3:
        System.out.print(a * b);
        break;
      case 4:
        if (b == 0)
          throw new ArithmeticException("Can't divide by 0.");
        System.out.print(a / b);
        break;
      default:
        throw new InvalidOperationException();
      }
    } catch (Exception exp) {
      System.out.println(exp.getMessage());
    } finally {
      scanner.close();
    }
  }
}