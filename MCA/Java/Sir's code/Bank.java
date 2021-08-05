package HDFCBank;
import java.util.ArrayList;
import java.util.List;



public class Bank {
private String bankName;
private String IfscCode;
private List<Customer> customerList;

Bank(){
	
	
customerList=new ArrayList<Customer>();	
}

public String getBankName() {
	return bankName;
}
public void setBankName(String bankName) {
	this.bankName = bankName;
}
public String getIfscCode() {
	return IfscCode;
}
public void setIfscCode(String ifscCode) {
	IfscCode = ifscCode;
}
public List<Customer> getCustomerList() {
	return customerList;
}
public void setCustomerList(List<Customer> customerList) {
	this.customerList = customerList;
}

public void addCustomer(Customer customer){
	this.customerList.add(customer); 
}
public void removeCustomer(Customer customer){
	this.customerList.remove(customer);
}
public void displayCustomerList(){
	System.out.println("Customer list :-");
	for(Customer customer : customerList){
		
		System.out.println("Id :"+customer.getCustomeId());
		System.out.println("Name :" + customer.getCustomerName());
		
	}
}

}
