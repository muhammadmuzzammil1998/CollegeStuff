package demo;

import java.util.LinkedList;
import java.util.Scanner;

import cse.sest.*;

public class demo {
	static final int exitCode = 0; // Added in version 3;
	static final Scanner scanner = new Scanner(System.in); // Added in version 5;
	static LinkedList<Student> students; // Added in version 6;

	public static void main(String[] args) {
		students = new LinkedList<Student>();
		System.out.println("Welcome to the School");

		// Version 1 - Initial code
		//
		// Address muzammilAddress = new Address("<redacted>", "<redacted>",
		// "<redacted>", "<redacted>",
		// "Delhi", 110092);
		// Student muzammil = new Student("Mohammad Muzammil Khan", "Male", "MCA", 22,
		// muzammilAddress);
		// muzammil.setEnroll("2020-501-029");
		//
		// System.out.println(String.format("Name: %s (%s, %d years old)",
		// muzammil.getName(), muzammil.getGender(),
		// muzammil.getAge()));
		// System.out.println("Course: " + muzammil.getCourse());
		// System.out.println("Enrollment No: " + muzammil.getEnroll());
		// System.out.println("Communication Address: " +
		// muzammil.getCommunicationAddress());
		// System.out.println("Permanent Address: " + muzammil.getPermanentAddress());

		// Version 2 - Working proof of concept for getting input using
		// java.util.Scanner
		//
		// Scanner sc = new Scanner(System.in);
		// String name;
		// String course;
		// String gender;
		// int age;
		//
		// System.out.print("Enter Name of the Student: ");
		// name = sc.nextLine();
		//
		// System.out.print("Enter Course: ");
		// course = sc.nextLine();
		//
		// System.out.print("Enter Gender: ");
		// gender = sc.nextLine();
		//
		// System.out.print("Enter Age of the Student: ");
		// age = sc.nextInt();
		//
		// Student std = new Student(name, gender, course, age, null);
		// System.out.println(std);

		// Version 3 - Add menu for the program
		//
		// System.out.println("1. Add student");
		// System.out.println("2. Edit an existing student record");
		// System.out.println("3. Delete student record");
		// System.out.println("4. Display student record");
		// System.out.println("5. Display all student records");
		// System.out.println(exitCode + ". Exit");

		// Version 4 - Adding handler for choice input
		//
		// Scanner scan = new Scanner(System.in);
		// do {
		// System.out.print("Enter your choice: ");
		// } while (handle(scan.nextInt()));

		// Version 5 - Generalized input registering
		do {
			System.out.println("1. Add student");
			System.out.println("2. Edit an existing student record");
			System.out.println("3. Delete student record");
			System.out.println("4. Display student record");
			System.out.println("5. Display all student records");
			System.out.println(exitCode + ". Exit");
			System.out.println("\nNo. of Students: " + students.size());
			System.out.print("Enter your choice: ");
		} while (handle(scanner.nextInt()));
	}

	// Version 6 - Handle the input
	public static void clearBuffer() {
		scanner.nextLine();
	}

	public static boolean handle(int ch) {
		if (ch == exitCode) // Exit loop if exit code
			return false;

		switch (ch) {
			case 1:
				Student s = createStudent();
				students.add(s);
				System.out.println(" Student " + s.getName() + " added.\n\n\n");
				break;
			case 2:
				updateStudent();
				System.out.println(" Student updated.\n\n\n");
				break;
			case 3:
				deleteStudent();
				System.out.println(" Student deleted.\n\n\n");
				break;
			case 4:
				clearBuffer();
				System.out.print(" Enter enrollment no.: ");
				String enroll = scanner.nextLine();

				for (Student student : students) {
					if (student.getEnroll().equals(enroll)) {
						System.out.println("\nStudent Details");
						System.out.println("===============");
						System.out.println(student);
						System.out.println();
					}
				}
				break;
			case 5:
				System.out.println("\nStudents Details");
				System.out.println("================\n");

				for (Student student : students) {
					System.out.println(student);
					System.out.println();
				}
				break;
			default:
				System.err.println("Wrong input... Try again...");
		}
		return true;
	}

	public static Student createStudent() {
		String name;
		String enroll;
		String gender;
		String course;
		Address permanentAddress;
		int age;

		clearBuffer();

		System.out.print(" Enter Name of the Student: ");
		name = scanner.nextLine();

		System.out.print(" Enter Gender: ");
		gender = scanner.nextLine();

		System.out.print(" Enter Course: ");
		course = scanner.nextLine();

		System.out.print(" Enter Enrollment no.: ");
		enroll = scanner.nextLine();

		System.out.print(" Enter Age of the Student: ");
		age = scanner.nextInt();

		clearBuffer();
		System.out.println(" Enter Permanent Address of the Student: ");
		permanentAddress = new Address(scanner);
		clearBuffer();

		Student s = new Student(name, gender, course, age, permanentAddress);
		s.setEnroll(enroll);
		s.setCommunicationAddress(permanentAddress); // By default same as perma addr. Saves 1 jump in lower level.

		System.out.print("Is communication address same as permanent address? (y/n): ");
		if (scanner.nextLine().equals("n")) {
			System.out.println(" Enter Communication Address of the Student: ");
			s.setCommunicationAddress(new Address(scanner));
		}
		return s;
	}

	private static void updateStudent() {
		int index = 0;
		boolean found = false;

		System.out.println(" What do you want to change?");
		System.out.println(" 1. Enrollment no.");
		System.out.println(" 2. Course");
		System.out.println(" 3. Communication Address");

		System.out.print(" Enter choice: ");
		int choice = scanner.nextInt();

		clearBuffer();
		System.out.print(" Enter enrollment no.: ");
		String enroll = scanner.nextLine();

		for (Student student : students) {
			if (student.getEnroll().equals(enroll)) {
				switch (choice) {
					case 1:
						System.out.print(" Enter new Enrollment no.:");
						student.setEnroll(scanner.nextLine());
						break;
					case 2:
						System.out.print(" Enter new Course: ");
						student.setCourse(scanner.nextLine());
						break;
					case 3:
						System.out.print(" Enter new communication address:");
						student.setCommunicationAddress(new Address(scanner));
						break;
					default:
						System.err.println("Invalid option!");
				}
				students.set(index, student);
				found = true;
			}
			index++;
		}
		if (!found) {
			System.err.println(" Student not found!");
		}
	}

	public static void deleteStudent() {
		int index = 0;
		clearBuffer();
		System.out.print(" Enter enrollment no.: ");
		String enroll = scanner.nextLine();

		for (Student student : students) {
			if (student.getEnroll().equals(enroll)) {
				students.remove(index);
			}
			index++;
		}
	}
}