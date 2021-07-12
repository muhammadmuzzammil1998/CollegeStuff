package demo;

import java.util.Scanner;

import custom.LinkedList;

public class LinkedListDemo {

	static Scanner sc = new Scanner(System.in);

	static int get(String q) {
		System.out.print("\n> " + q + ": ");
		return Integer.parseInt(sc.nextLine());
	}

	static void printOptions() {
		System.out.println("Please select your option:");
		System.out.println(" 1. Add to linked list");
		System.out.println(" 2. Delete from linked list data");
		System.out.println(" 3. Search in linked list");
		System.out.println(" 4. Sort linked list");
		System.out.println(" 5. Populate linked list");
		System.out.println(" 6. Print linked list");
		System.out.println(" 0. Exit");
	}

	static void handle(int input, LinkedList ll) {
		switch (input) {
		case 1:
			ll.insert(get("Enter element"));
			System.out.println(">> Element added to Linked List");
			break;
		case 2:
			int n = get("Enter element to delete");
			if (ll.search(n) < 0) {
				System.out.println(">> Element not found");
				return;
			}
			ll.delete(n);
			System.out.println(">> Element deleted");
			break;
		case 3:
			int index = ll.search(get("Enter element to search"));
			if (index > 0) {
				System.out.println(">> Element located at position " + index);
				return;
			}
			System.out.println(">> Element not found.");
			break;
		case 4:
			ll.sort();
			System.out.println(">> Linked List sorted");
			break;
		case 5:
			ll.populate(get("How many elements? "));
			System.out.println(">> Linked List populated with random data");
			break;
		case 6:
			System.out.println(ll);
			break;
		default:
			System.out.println("!! Invalid option.\n");
			printOptions();
		}
	}

	public static void main(String[] args) {
		LinkedList ll = new LinkedList();

		printOptions();

		int input;
		while ((input = get("Your choice")) > 0)
			handle(input, ll);
	}

}
