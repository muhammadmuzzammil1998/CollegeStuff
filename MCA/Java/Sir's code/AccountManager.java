package HDFCBank;

public class AccountManager {

	public static void main(String[] args)  {
		// TODO Auto-generated method stub
Account myAccount1=new SavingAccount("12345", 
		AccountType.SAVINGS_ACCOUNT, "Shah Imran Alam", 5000);
Account myAccount2=new SavingAccount("12346", 
		AccountType.SAVINGS_ACCOUNT, "ABC", 7000);
Account myAccount3=new SavingAccount("12347", 
		AccountType.SAVINGS_ACCOUNT, "XYZ", 12000);
Customer imran=new Customer();
imran.setCustomeId("HDFC101");
imran.setCustomerName("Shah Imran Alam");
Customer vaibhav=new Customer();
vaibhav.setCustomeId("HDFC102");
Customer john=new Customer();
john.setCustomeId("HDFC103");


imran.setCustomerAccount(myAccount1);
vaibhav.setCustomerAccount(myAccount2);
john.setCustomerAccount(myAccount3);
Bank myBank=new Bank();
myBank.setBankName("HDFC");
myBank.setIfscCode("HDFC00015");
myBank.addCustomer(imran);
myBank.addCustomer(vaibhav);
myBank.addCustomer(john);
//myBank.displayCustomerList();
AccountUtil.publishMainMenuAndExecute(myBank, imran);

	}

}
