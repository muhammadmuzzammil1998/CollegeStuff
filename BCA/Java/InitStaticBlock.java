public class InitStaticBlock {
  {
    System.out.println("Ran inside init block");
  }

  static {
    System.out.println("Ran inside static block");
  }

  public static void main(String[] args) {
    new InitStaticBlock();
    new InitStaticBlock();
  }
}