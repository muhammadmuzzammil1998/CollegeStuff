public class LinearSearch {
  public static void dump(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static int search(int arr[], int item) {
    int found = -1, i;
    for (i = 0; i < arr.length; i++) {
      if (item == arr[i]) {
        found = i;
        break;
      }
    }
    return found;
  }

  public static void main(String[] args) {
    int[] arr = { 4, 6, 3, 7, 9, 1, 2, 6, 4, 5, 6, 3, 7 };
    dump(arr);
    int find = 7;
    int loc = search(arr, find);
    if (loc > -1) {
      System.out.println("\nFirst occurrence of " + arr[loc] + " is at index #" + loc);
    } else {
      System.out.println("\nCouldn't find " + find);
    }
  }
}
