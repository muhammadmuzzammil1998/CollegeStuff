interface Animal {
    public void talk();
}

interface Mammal extends Animal {
    public int getAge();

    public void setAge(int n);
}

class Cat implements Animal, Mammal {
    int age;

    Cat(int a) {
        this.age = a;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int a) {
        age = a;
    }

    public void talk() {
        System.out.println("Meow!");
    }
}

class Interfaces {
    public static void main(String[] args) {
        Cat kitty = new Cat(3);
        System.out.print("Cat says ");
        kitty.talk();
        System.out.println("Age of cat: " + kitty.getAge());
    }
}
