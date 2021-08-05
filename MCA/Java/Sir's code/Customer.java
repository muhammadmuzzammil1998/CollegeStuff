package HDFCBank;

import java.util.List;

public class Customer {
private String customerName;
private String customerDOB;
private boolean customerGender;
private String customeId;
private String customerAddress;
//private List<Account> customerAccounts;
private Account customerAccount;
public String getCustomerName() {
	return customerName;
}
public void setCustomerName(String customername) {
	this.customerName = customername;
}
public String getCustomerDOB() {
	return customerDOB;
}
public void setCustomerDOB(String customerDOB) {
	this.customerDOB = customerDOB;
}
public boolean isCustomerGender() {
	return customerGender;
}
public void setCustomerGender(boolean customerGender) {
	this.customerGender = customerGender;
}
public String getCustomeId() {
	return customeId;
}
public void setCustomeId(String customeId) {
	this.customeId = customeId;
}
public String getCustomerAddress() {
	return customerAddress;
}
public void setCustomerAddress(String customerAddress) {
	this.customerAddress = customerAddress;
}
public Account getCustomerAccount() {
	return customerAccount;
}
public void setCustomerAccount(Account customerAccount) {
	this.customerAccount = customerAccount;
}

public void openAccount(Account customerAccount)
{
	this.customerAccount=customerAccount;
}
public void closeAccount(){
	this.customerAccount=null;
}
public void changeCustomerAddress(String customerAddress){
	this.customerAddress=customerAddress;
}
public int calculateAge(){
	// TO DO
	
	return 0;
}
@Override
public String toString() {
	return "Customer [customerName=" + customerName + ", customerDOB=" + customerDOB + ", customerGender="
			+ customerGender + ", customeId=" + customeId + ", customerAddress=" + customerAddress
			+ ", customerAccount=" + customerAccount + "]";
}

}
