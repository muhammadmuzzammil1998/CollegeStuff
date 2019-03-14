class ArraySearch {
  public static int LinearSearch(int arr[], int item) {
    int found = -1, i;
    for (i = 0; i < arr.length; i++) {
      if (item == arr[i]) {
        found = i;
        break;
      }
    }
    return found;
  }

  public static int BinarySearch(int arr[], int item) {
    int found = -1, left = 0, right = arr.length - 1, mid = 0;
    while (left <= right) {
      mid = (left + right) / 2;
      if (arr[mid] == item) {
        found = mid;
        break;
      } else if (item > arr[mid]) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    return found;
  }

  public static void print(int loc, int find) {
    if (loc > -1) {
      System.out.print("First occurrence of " + find);
      System.out.print(" is at index #" + loc);
    } else {
      System.out.println("Couldn't find " + find);
    }
    System.out.println();
  }

  public static void main(String[] args) {
    int[] arr = { 1, 2, 3, 3, 4, 4, 5, 6, 6, 6, 7, 7, 9 };
    System.out.print("Array: ");
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
    System.out.println("\nSearching using Linear Search");
    int toFind, loc;
    toFind = 7;
    loc = LinearSearch(arr, toFind);
    print(loc, toFind);
    System.out.println("\nSearching using Binary Search");
    toFind = 9;
    loc = BinarySearch(arr, toFind);
    print(loc, toFind);
  }
}
