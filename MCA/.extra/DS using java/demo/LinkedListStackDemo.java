package demo;

import java.util.Scanner;

import custom.LinkedListStack;

public class LinkedListStackDemo {

	static Scanner sc = new Scanner(System.in);

	static int get(String q) {
		System.out.print("\n> " + q + ": ");
		return Integer.parseInt(sc.nextLine());
	}

	static void printOptions() {
		System.out.println("Please select your option:");
		System.out.println(" 1. Push to stack");
		System.out.println(" 2. Pop from stack");
		System.out.println(" 3. Peek stack");
		System.out.println(" 4. Print stack");
		System.out.println(" 0. Exit");
	}

	static void handle(int input, LinkedListStack stack) {
		switch (input) {
		case 1:
			stack.push(get("Enter element"));
			System.out.println(">> Element added to stack");
			break;
		case 2:
			System.out.println(">> " + stack.pop() + " element deleted");
			break;
		case 3:
			System.out.println(">> Element on top: " + stack.peek());
			break;
		case 4:
			stack.print();
			break;
		default:
			System.out.println("!! Invalid option.\n");
			printOptions();
		}
	}

	public static void main(String[] args) {
		LinkedListStack stack = new LinkedListStack();

		printOptions();

		int input;
		while ((input = get("Your choice")) > 0) {
			handle(input, stack);
			System.out.println("Stack size = " + stack.length());
		}
	}
}
