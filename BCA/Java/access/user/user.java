package access.user;

import access.modifier.*;

class user {
  public static void main(String[] args) {
    modifiers.publicFunction("user in different package");
  }
}

class child extends modifiers {
  public static void main(String[] args) {
    modifiers.publicFunction("child in different package");
    modifiers.protectedFunction("child in different package");
  }
}