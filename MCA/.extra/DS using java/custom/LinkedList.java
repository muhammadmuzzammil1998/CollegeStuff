package custom;

public class LinkedList {
	class Node {
		int data;
		Node next;

		Node(int n) {
			data = n;
			next = null;
		}
	}

	Node head;

	public void insert(int data) {
		if (head == null) {
			head = new Node(data);
			return;
		}
		Node current = head;
		while (current.next != null)
			current = current.next;
		current.next = new Node(data);
	}

	public void delete(int data) {
		if (head == null)
			return;
		if (head.data == data) {
			head = head.next;
			return;
		}

		Node current = head;
		while (current.next != null) {
			if (current.next.data == data) {
				current.next = current.next.next;
				return;
			}
			current = current.next;
		}
	}

	public void sort() {
		Node current = head;
		while (current.next != null) {
			Node ncurrent = current.next;
			while (ncurrent != null) {
				if (ncurrent.data < current.data) {
					int temp = current.data;
					current.data = ncurrent.data;
					ncurrent.data = temp;
				}
				ncurrent = ncurrent.next;
			}
			current = current.next;
		}
	}

	public int search(int data) {
		Node current = head;
		int index = 0;
		boolean found = false;
		while (current != null) {
			index++;
			if (current.data == data) {
				found = true;
				break;
			}
			current = current.next;
		}
		return found ? index : -1;
	}

	@Override
	public String toString() {
		String out = "";
		Node current = head;
		while (current != null) {
			out += current.data + " -> ";
			current = current.next;
		}
		out += "NULL";
		return out;
	}

	public void populate(int lim) {
		for (int i = 0; i < lim; i++) {
			this.insert((int) (Math.random() * 100));
		}
	}
}
