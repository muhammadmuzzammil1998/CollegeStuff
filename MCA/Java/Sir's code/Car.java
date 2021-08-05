package in.ac.jh;

public class Car {

	String chasisNo;
	String color;
	int makeYear;
	String brand;
	String rcNO;

	@Override
	public String toString() {
		return "Car [chasisNo=" + chasisNo + ", color=" + color + ", makeYear=" + makeYear + ", brand=" + brand + "]";
	}

	public Car() {
	}
	public Car(String chasisNo, String color, int makeYear, String brand) {
		this.chasisNo = chasisNo;
		this.color = color;
		this.makeYear = makeYear;
		this.brand = brand;
	}

	public String getChasisNo() {
		return chasisNo;
	}

	public void setChasisNo(String chasisNo) {
		this.chasisNo = chasisNo;
	}

	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}

	public int getMakeYear() {
		return makeYear;
	}

	public void setMakeYear(int makeYear) {
		this.makeYear = makeYear;
	}

	public String getBrand() {
		return brand;
	}

	public void setBrand(String brand) {
		this.brand = brand;
	}

	public String getRcNO() {
		return rcNO;
	}

	public void setRcNO(String rcNO) {
		this.rcNO = rcNO;
	}
}
