class Animal {
  public void talk() {
    System.out.println("Basic animal voice");
  }
}

class Cat extends Animal {
  public void talk() {
    System.out.println("Meow");
  }
}

class Mouse extends Animal {
  public void talk() {
    System.out.println("Squeak");
  }
}

class Overriding {
  public static void main(String[] args) {
    Animal kitty = new Cat();
    Animal sponge = new Mouse();
    Animal animal = new Animal();
    kitty.talk();
    sponge.talk();
    animal.talk();
  }
}