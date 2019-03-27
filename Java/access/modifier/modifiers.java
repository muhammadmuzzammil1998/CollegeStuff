package access.modifier;

public class modifiers {
  public static void publicFunction(String id) {
    System.out.println("Public function from " + id);
  }

  protected static void protectedFunction(String id) {
    System.out.println("Protected function from " + id);
  }

  private static void privateFunction(String id) {
    System.out.println("Private function from " + id);
  }

  public static void main(String[] args) {
    publicFunction("self");
    protectedFunction("self");
    privateFunction("self");
  }
}

class user {
  public static void main(String[] args) {
    modifiers.publicFunction("user in same package");
    modifiers.protectedFunction("user in same package");
  }
}

class child extends modifiers {
  public static void main(String[] args) {
    modifiers.publicFunction("child in same package");
    modifiers.protectedFunction("child in same package");
  }
}
