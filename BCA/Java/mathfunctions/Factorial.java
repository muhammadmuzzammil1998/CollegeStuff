package mathfunctions;

public class Factorial {
  public static int Calculate(int n) {
    int fac = 1;
    for (int i = 1; i <= n; i++) {
      fac *= i;
    }
    return fac;
  }
}