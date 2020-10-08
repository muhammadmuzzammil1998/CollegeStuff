class Prime {
  static boolean isprime(int n) {
    boolean prime = true;
    for (int i = 2; i < n; i++)
      if (n % i == 0) {
        prime = false;
        break;
      }
    return prime;
  }

  public static void main(String[] args) {
    if (isprime(Integer.parseInt(args[0]))) {
      System.out.println("Number is prime");
    } else {
      System.out.println("Number is not prime");
    }
  }
}