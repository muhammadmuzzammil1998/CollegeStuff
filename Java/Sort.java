public class Sort {
  public static void dump(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static void main(String[] args) {
    int[] arr = { 4, 6, 3, 7, 9, 1, 2, 6, 4, 5, 6, 3, 7 };
    System.out.print("Unsorted array:\t");
    dump(arr);
    Selection.Sort(arr);
    System.out.print("\nSorted array:\t");
    dump(arr);
  }
}

class Insertion {
  public static void Sort(int[] arr) {
    for (int i = 1; i < arr.length; i++) {
      int x = arr[i];
      int j = i - 1;
      while (j >= 0 && arr[j] > x) {
        arr[j + 1] = arr[j];
        j--;
      }
      arr[j + 1] = x;
      i++;
    }
  }
}

class Selection {
  public static void Sort(int[] arr) {
    for (int i = 0, min; i <= arr.length; i++) {
      min = i;
      for (int j = i; j < arr.length; j++)
        if (arr[j] < arr[min])
          min = j;
      if (min != i) {
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
      }
    }
  }
}

class Bubble {
  public static void Sort(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      for (int j = 0; j < arr.length - 1; j++)
        if (arr[j] > arr[j + 1]) {
          int tmp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = tmp;
        }
    }
  }
}
