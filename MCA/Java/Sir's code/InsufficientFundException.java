package HDFCBank;

public class InsufficientFundException extends Exception{
	private float deficietAmount; 
	public float getDeficietAmount() {
		return deficietAmount;
	}
	InsufficientFundException(float deficietAmount){
		 this.deficietAmount=deficietAmount;
	 }
}
