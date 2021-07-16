package cse.sest;

public class Address {

	public String flatNo;
	public String street;
	public String locality;
	public String district;
	public String state;
	public int pincode;

	public Address(String flatNo, String street, String locality, String district, String state, int pincode) {
		this.flatNo = flatNo;
		this.street = street;
		this.locality = locality;
		this.district = district;
		this.state = state;
		this.pincode = pincode;
	}

	public Address(java.util.Scanner sc) {
		System.out.print("  Flat no.: ");
		flatNo = sc.nextLine();
		
		System.out.print("  Street: ");
		street = sc.nextLine();
		
		System.out.print("  Locality: ");
		locality = sc.nextLine();
		
		System.out.print("  District: ");
		district = sc.nextLine();
		
		System.out.print("  State: ");
		state = sc.nextLine();
		
		System.out.print("  Pincode: ");
		pincode = sc.nextInt();
	}

	@Override
	public String toString() {
		return String.format("%s, %s, %s, %s, %s (%d)", flatNo, street, locality, district, state, pincode);
	}
}
