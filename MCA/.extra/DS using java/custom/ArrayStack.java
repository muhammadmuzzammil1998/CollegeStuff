package custom;

public class ArrayStack {
	int[] stack;
	int count = 0;

	public ArrayStack(int size) {
		stack = new int[size];
	}

	public void push(int data) {
		if (isOverflow()) {
			System.err.println("Stack full. Reached maximum limit defined.");
			return;
		}
		stack[count++] = data;
	}

	public boolean isOverflow() {
		return count == stack.length;
	}

	public boolean isUnderflow() {
		return count == 0;
	}

	public int pop() {
		if (isUnderflow()) {
			System.err.println("Stack empty.");
			return 0;
		}
		int peek = peek();
		stack[--count] = 0;
		return peek;
	}

	public int peek() {
		return stack[count - 1];
	}

	public int length() {
		return count;
	}

	@Override
	public String toString() {
		String out = "Stack: ";
		for (int i : stack) {
			out += i + " ";
		}
		return out;
	}
}
