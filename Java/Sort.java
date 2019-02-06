public class Sort {
  public static void dump(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static void sort(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      for (int j = 0; j < arr.length - 1; j++)
        if (arr[j] > arr[j + 1]) {
          int tmp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = tmp;
        }
    }
  }

  public static void main(String[] args) {
    int[] arr = { 4, 6, 3, 7, 9, 1, 2, 6, 4, 5, 6, 3, 7 };
    System.out.print("Unsorted array:\t");
    dump(arr);
    sort(arr);
    System.out.print("\nSorted array:\t");
    dump(arr);
  }
}
