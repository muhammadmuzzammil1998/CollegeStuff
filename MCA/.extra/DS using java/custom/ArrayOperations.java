package custom;

public class ArrayOperations {
	private int[] arr;

	public int length = 0;
	public int count = 0;

	public void load(int[] array) {
		arr = array;
		length = array.length;
	}

	public int[] populate() {
		return populate(arr.length);
	}

	public int[] populate(int lim) {
		count = 0;
		for (int i = 0; i < lim; i++) {
			add((int) (Math.random() * 100));
		}
		length = lim;
		return arr;
	}

	@Override
	public String toString() {
		String out = "Array [" + count + "]: ";
		for (int i = 0; i < count; i++) {
			out += arr[i] + " ";
		}
		return out;
	}

	public void add(int n) {
		arr[count++] = n;
		length++;
	}

	public void delete(int n) {
		deleteAt(search(n));
	}

	public void deleteAt(int index) {
		arr[index] = 0;
		length--;
	}

	public int search(int n) {
		int index = 0;
		boolean found = false;
		for (int i : arr) {
			if (i == n) {
				found = true;
				break;
			}
			index++;
		}
		return found ? index : -1;
	}

	public void sort() {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
		System.out.println(length);
	}
}
