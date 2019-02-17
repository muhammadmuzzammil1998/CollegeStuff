public class BinarySearch {
  static int search(int[] set, int item) {
    int found = -1, left = 0, right = set.length - 1, mid = 0;
    while (left <= right) {
      mid = (left + right) / 2;
      if (set[mid] == item) {
        found = mid;
        break;
      } else if (item > set[mid]) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    return found;
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

  public static void dump(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static void main(String[] args) {
    int[] arr = { 4, 6, 9, 1, 2, 5, 3, 8, 7 };
    System.out.print("Array:\t\t");
    dump(arr);
    sort(arr);
    System.out.print("\nSorted array:\t");
    dump(arr);
    int find = 7;
    int loc = search(arr, find);
    if (loc > -1) {
      System.out.println("\nOccurrence of " + arr[loc] + " is at index #" + loc);
    } else {
      System.out.println("\nCouldn't find " + find);
    }
  }
}
