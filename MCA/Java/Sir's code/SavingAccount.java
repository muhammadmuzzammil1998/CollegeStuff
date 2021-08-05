package HDFCBank;

public class SavingAccount extends Account {
private float annualIntrest;
	public float getAnnualIntrest() {
	return annualIntrest;
}
public void setAnnualIntrest(float annualIntrest) {
	this.annualIntrest = annualIntrest;
}
	SavingAccount(String accountNumber, String accountType, 
			String benificiary,float accountBalance){
		super(accountNumber,accountType, benificiary, accountBalance);
		this.annualIntrest=
				BankingApplicationConstants.SAVING_ACCOUNT_INTREST_RATE;
		
	}
	SavingAccount(String accountNumber, String accountType, 
			String benificiary,float accountBalance,String jointAccountHolderName){
		super(accountNumber,accountType, benificiary, accountBalance);
		this.jointAccountHolderName=jointAccountHolderName;
		this.annualIntrest=
				BankingApplicationConstants.SAVING_ACCOUNT_INTREST_RATE;
		
	}
	@Override
	public void deposit(float depositAmount) {
		// TODO Auto-generated method stub
		this.setAccountBalance(this.getAccountBalance()+depositAmount);
		
	}
	@Override
	public float withdraw(float withdrawalAmount) throws InsufficientFundException {
		// TODO Auto-generated method stub
		if(this.getAccountBalance()>=withdrawalAmount){
			setAccountBalance(this.getAccountBalance()-withdrawalAmount);
			
		}else{
			throw new InsufficientFundException(withdrawalAmount-getAccountBalance());
		
		}
		return getAccountBalance();
	}

}
