package custom;

public class LinkedListStack {
	class Node {
		int data;
		Node next;

		Node(int n) {
			data = n;
			next = null;
		}
	}

	int length = 0;

	Node head;
	Node current;

	public void push(int data) {
		if (head == null) {
			head = new Node(data);
			length++;
			return;
		}
		Node current = head;
		while (current.next != null)
			current = current.next;
		current.next = new Node(data);
		this.current = current.next;
		length++;
	}

	public int pop() {
		if (head == null)
			return 0;
		int data = peek();
		
		if (head.data == data) {
			head = null;
			this.current = head;
			length--;
			return data;
		}

		Node current = head;
		while (current.next != null) {
			if (current.next.data == data) {
				current.next = current.next.next;
				length--;
				this.current = current;
				return data;
			}
			current = current.next;
		}
		return data;
	}

	public int peek() {
		if (head == null) {
			System.err.println("Stack is empty");
			return 0;
		}
		return current.data;
	}

	public int length() {
		return length;
	}

	public void print() {
		Node current = head;
		while (current != null) {
			System.out.print(current.data + " -> ");
			current = current.next;
		}
		System.out.println("NULL");
	}
}
