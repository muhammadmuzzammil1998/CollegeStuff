package HDFCBank;

 public abstract class Account {
	
	private String accountNumber;
	private String accountType;
	private String benificiary;
	private boolean isJointAccount;
	private float accountBalance;
	private boolean status;
	String jointAccountHolderName;
	public String getJointAccountHolderName() {
		return jointAccountHolderName;
	}
	public void setJointAccountHolderName(String jointAccountHolderName) {
		this.jointAccountHolderName = jointAccountHolderName;
	}
	Account(String accountNumber, String accountType, String benificiary,float accountBalance){
	status=true;
	this.accountNumber=accountNumber;
	this.accountType=accountType;
	this.benificiary=benificiary;
	this.accountBalance=accountBalance;
	}
	public String getAccountNumber() {
		return accountNumber;
	}
	
	public String getAccountType() {
		return accountType;
	}
	public void setAccountType(String accountType) {
		this.accountType = accountType;
	}
	public String getBenificiary() {
		return benificiary;
	}
	public void setBenificiary(String benificiary) {
		this.benificiary = benificiary;
	}
	public boolean isJointAccount() {
		return isJointAccount;
	}
	public void setJointAccount(boolean isJointAccount) {
		this.isJointAccount = isJointAccount;
	}
	public float getAccountBalance() {
		return accountBalance;
	}
	public void setAccountBalance(float accountBalance) {
		this.accountBalance = accountBalance;
	}
	public boolean isStatus() {
		return status;
	}
	public void setStatus(boolean status) {
		this.status = status;
	}
	public abstract float withdraw(float withdrawalAmount) throws InsufficientFundException; 
	
	
	public abstract void deposit(float depositAmount);
}
