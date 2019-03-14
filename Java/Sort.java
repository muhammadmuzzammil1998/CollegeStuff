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

public class Sort {
  public static void dump(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static void dump(int[] arr, boolean sorted) {
    if (sorted) {
      System.out.print("  Sorted array:\t\t");
    } else {
      System.out.print("  Unsorted array:\t");
    }
    dump(arr);
    System.out.println(sorted ? "\n" : "");
  }

  public static int[] getArray() {
    int[] arr = new int[10];
    for (int i = 0; i < 10; i++) {
      arr[i] = (int) Math.round(Math.random() * 9);
    }
    return arr;
  }

  public static void main(String[] args) {
    int[] arr = getArray();
    System.out.println("Selection Sort:");
    dump(arr, false);
    Selection.Sort(arr);
    dump(arr, true);
    arr = getArray();
    System.out.println("Insertion Sort:");
    dump(arr, false);
    Insertion.Sort(arr);
    dump(arr, true);
    System.out.println("Bubble Sort:");
    arr = getArray();
    dump(arr, false);
    Bubble.Sort(arr);
    dump(arr, true);
  }
}