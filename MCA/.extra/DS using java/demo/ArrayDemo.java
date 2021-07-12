package demo;

import java.util.Scanner;

import custom.ArrayOperations;

public class ArrayDemo {

	static Scanner sc = new Scanner(System.in);

	static int get(String q) {
		System.out.print("\n> " + q + ": ");
		return Integer.parseInt(sc.nextLine());
	}

	static void printOptions() {
		System.out.println("Please select your option:");
		System.out.println(" 1. Add to array");
		System.out.println(" 2. Delete from array index");
		System.out.println(" 3. Delete from array data");
		System.out.println(" 4. Search in array");
		System.out.println(" 5. Sort array");
		System.out.println(" 6. Populate array");
		System.out.println(" 7. Print array");
		System.out.println(" 0. Exit");
	}

	static void handle(int input, ArrayOperations array) {
		switch (input) {
		case 1:
			array.add(get("Enter element"));
			System.out.println(">> Element added to array");
			break;
		case 2:
			array.deleteAt(get("Enter index to delete"));
			System.out.println(">> Element deleted");
			break;
		case 3:
			int n = get("Enter element to delete");
			if (array.search(n) < 0) {
				System.out.println(">> Element not found");
				return;
			}
			array.delete(n);
			System.out.println(">> Element deleted");
			break;
		case 4:
			int index = array.search(get("Enter element to search"));
			if (index > 0) {
				System.out.println(">> Element located at index " + index);
				return;
			}
			System.out.println(">> Element not found.");
			break;
		case 5:
			array.sort();
			System.out.println(">> Array sorted");
			break;
		case 6:
			array.populate();
			System.out.println(">> Array populated with random data");
			break;
		case 7:
			System.out.println(array);
			break;
		default:
			System.out.println("!! Invalid option.\n");
			printOptions();
		}
	}

	public static void main(String[] args) {
		ArrayOperations array = new ArrayOperations();
		array.load(new int[10]);

		printOptions();

		int input;
		while ((input = get("Your choice")) > 0)
			handle(input, array);
	}
}
