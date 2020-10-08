class Animal {
  public void talk() {
    System.out.println("Generic animal voice");
  }

  public void superTalk() {
    this.talk();
  }
}

class Cat extends Animal {
  public void talk() {
    System.out.println("Meow");
  }

  public void superTalk() {
    super.talk();
  }
}

class Mouse extends Animal {
  public void talk() {
    System.out.println("Squeak");
  }

  public void superTalk() {
    super.talk();
  }
}

class Overriding {
  public static void main(String[] args) {
    Animal kitty = new Cat();
    Animal sponge = new Mouse();
    Animal animal = new Animal();
    kitty.superTalk();
    kitty.talk();
    sponge.superTalk();
    sponge.talk();
    animal.talk();
  }
}