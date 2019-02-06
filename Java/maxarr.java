public class maxarr {
  public static void main(String[] args) {
    int arr[] = { 3, 4, 5, 6, 7, 65, 897, 68, 2 }, max = 0;
    for (int i = 0; i < arr.length; i++) {
      if (max < arr[i])
        max = arr[i];
    }
    System.out.println(max);
  }
}
