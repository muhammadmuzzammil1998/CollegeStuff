package factorialcalc;

import mathfunctions.Factorial;

public class CalcFactorial {
  public static void main(String[] args) {
    int n = 5;
    System.out.println(n + "! = " + Factorial.Calculate(n));
  }
}