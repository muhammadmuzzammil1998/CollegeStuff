package HDFCBank;

import java.util.List;
import java.util.Scanner;



public class AccountUtil {
	 
	public static Customer getCustomerById(Bank hdfcBank){
		//depositAmount(hdfcBank,5000);
		//withdrawAmount(hdfcBank, 2000);
Customer firstCustomer=null;
		Scanner scan=new Scanner(System.in);

		System.out.println("Enter customer Id");

		String customerId=scan.next();


		firstCustomer=getCustomerById(hdfcBank, customerId);
		if(firstCustomer!=null)
		System.out.println("Welcome "+firstCustomer.getCustomerName());
		else {
			System.err.println("Error : No such customer");
			System.exit(0);
		}
		return firstCustomer;
		//System.out.println("Welcome "+getCustomerById(hdfcBank, customerId).getCustomername());
		//customerId = publishMainMenu(hdfcBank, scan, customerId);


	}
	public static String publishMainMenuAndExecute(Bank hdfcBank,  Customer customer) {
		Scanner scan=new Scanner(System.in);
		while(true){
			
		
			System.out.println("Enter operations :-");
			System.out.println("1.Deposit amount ");
			System.out.println("2.Withdraw amount");
			System.out.println("3.Fetch Customer by Id and Change customer Id");
			System.out.println("4.Fetch Customer by Id and View customer details");
			System.out.println("5.Exit");
			int option=scan.nextInt();
			
			
			float amount=0.0f;
			switch(option){
			
			case 1:
				System.out.println("Enter the amount to deposit");
				amount=scan.nextFloat();
			customer.getCustomerAccount().deposit(amount);
			
			System.out.println("Account balance = "+customer.getCustomerAccount().getAccountBalance());
			
					break;
					
			case 2: 
				System.out.println("Enter the amount to withdraw");
				amount=scan.nextFloat();
				try {
					customer.getCustomerAccount().withdraw(amount);
				} catch (InsufficientFundException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
				System.out.println("Account balance = "+customer.getCustomerAccount().getAccountBalance());
	
				break;
					
			case 3: 
					Customer fetchCustomer=getCustomerById(hdfcBank);
					if(fetchCustomer!=null){
						System.out.println("Customer Name is : "+fetchCustomer.getCustomerName());
					System.out.println("Enter new Id for customer ");
					fetchCustomer.setCustomeId(scan.next());
					
					}
						else {
							System.err.println("Error : No such customer");
							System.exit(0);
						}
		
					break;
			case 4: 
				Customer fetchCustomerToView=getCustomerById(hdfcBank);
				if(fetchCustomerToView!=null){
					System.out.println("Customer Name is : "+fetchCustomerToView.getCustomerName());
				fetchCustomerToView.toString();
				
				}
					else {
						System.err.println("Error : No such customer");
						System.exit(0);
					}
	
				break;
				
			case 5: System.exit(0);
			
			
			}
			
			
			
			
			
		}
		
	}

	private static void depositAmount(Bank hdfcBank,float amount, Customer customer) {
		//Testing : deposit
		
		
	
		Account firstCustomerAccount=customer.getCustomerAccount();
		
		System.out.println("Customer Name :"+customer.getCustomerName());
		System.out.println("Account balance :"+firstCustomerAccount.getAccountBalance());
		firstCustomerAccount.deposit(amount);
		
		System.out.println("Account balance after deposit of"+amount+" is "+firstCustomerAccount.getAccountBalance());
		
		
	}

	private static void withdrawAmount(Bank hdfcBank,float amount,Customer customer) {
		//Testing : deposit
		
		
		Account firstCustomerAccount=customer.getCustomerAccount();
		
		System.out.println("Customer Name :"+customer.getCustomerName());
		System.out.println("Account balance :"+firstCustomerAccount.getAccountBalance());
		try {
			firstCustomerAccount.withdraw(amount);
		} catch (InsufficientFundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		System.out.println("Account balance after withdrawl of"+amount+" is "+firstCustomerAccount.getAccountBalance());
		
		
	}
	private static Customer getCustomerById(Bank hdfcBank, String customerId) {
		List<Customer> customerList=hdfcBank.getCustomerList();
		Customer firstCustomer=null;
		for(Customer customer:customerList){
			if(customer.getCustomeId().equals(customerId))
				firstCustomer=customer;
			
			
		}
		return firstCustomer;
	}

}
