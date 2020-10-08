class SuperClass {
  public static int x = 23;

  SuperClass() {
    System.out.println("From SuperClass constructor\t" + x);
  }

  public void superFunction() {
    System.out.println("From SuperFunction");
  }
}

class SubClass extends SuperClass {
  public static int x = 53;

  SubClass() {
    System.out.println("From SubClass constructor\t" + x);
    System.out.println("Using super keyword in SubClass\t" + super.x);
    super.superFunction();
  }
}

class SuperKeyword {
  public static void main(String[] args) {
    new SubClass();
  }
}