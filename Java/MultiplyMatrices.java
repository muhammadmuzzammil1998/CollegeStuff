public class MultiplyMatrices {
  public static void space(int i, int width) {
    space(String.valueOf(i), width);
  }

  public static void space(int width) {
    space("", width);
  }

  public static void space(String str, int width) {
    for (int x = str.length(); x < width; x++) {
      System.out.print(' ');
    }
    System.out.print(str);
  }

  public static void dump(int arr[][], String label, int r, int c) {
    System.out.print("\t__");
    space((5 * c) + 1);
    System.out.println("__");
    for (int i = 0; i < r; i++) {
      if (i == Math.round(c / 2)) {
        System.out.print(label + " = ");
      }
      System.out.print("\t|");
      for (int j = 0; j < c; j++) {
        space(arr[i][j], 5);
      }
      System.out.println("   |");
    }
    System.out.print("\t--");
    space((5 * c) + 1);
    System.out.println("--");
  }

  public static void main(String[] args) {
    int[][] A = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int[][] B = { { 2, 3, 4 }, { 5, 6, 7 }, { 2, 3, 4 } };
    int[][] product = new int[3][3];
    dump(A, "A", 3, 3);
    dump(B, "B", 3, 3);
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          product[i][j] += A[i][k] * B[k][j];
        }
      }
    }
    dump(product, "AB", 3, 3);
  }
}