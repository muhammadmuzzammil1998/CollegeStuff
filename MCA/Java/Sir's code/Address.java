package in.ac.jh;

public class Address {

	String flatNo;
	public String streetName;
	private String localityName;
	private String city;
	private String state;
	private String nationality;
	private long pinCode;

	public Address(String flatNo, String streetName, String localityName, String city, String state, String nationality,
			long pinCode) {
		this.flatNo = flatNo;
		this.streetName = streetName;
		this.localityName = localityName;
		this.city = city;
		this.state = state;
		this.nationality = nationality;
		this.pinCode = pinCode;
	}

	public Address() {

	}

	public String getFlatNo() {
		return flatNo;
	}

	public void setFlatNo(String flatNo) {
		this.flatNo = flatNo;
	}

	public String getStreetName() {
		return streetName;
	}

	public void setStreetName(String streetName) {
		this.streetName = streetName;
	}

	public String getLocalityName() {
		return localityName;
	}

	public void setLocalityName(String localityName) {
		this.localityName = localityName;
	}

	public String getCity() {
		return city;
	}

	public void setCity(String city) {
		this.city = city;
	}

	public String getState() {
		return state;
	}

	public void setState(String state) {
		this.state = state;
	}

	public String getNationality() {
		return nationality;
	}

	public void setNationality(String nationality) {
		this.nationality = nationality;
	}

	public long getPinCode() {
		return pinCode;
	}

	public void setPinCode(long pinCode) {
		this.pinCode = pinCode;
	}

	@Override
	public String toString() {
		return "Address [flatNo=" + flatNo + ", streetName=" + streetName + ", localityName=" + localityName + ", city="
				+ city + ", state=" + state + ", nationality=" + nationality + ", pinCode=" + pinCode + "]";
	}

	
	// Access specifiers - public, protected, private, default

}
