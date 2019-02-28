class LinkedListDemo {
  public static void main(String[] args) {
    LinkedList ll = new LinkedList();
    for (int i = 0; i < args.length; i++) {
      ll.append(Integer.parseInt(args[i]));
    }
    ll.traverse();
  }
}

class Node {
  public int value;
  public Node next;

  Node(int value) {
    this.value = value;
  }
}

class LinkedList {
  Node head;

  LinkedList(int headvalue) {
    this.head = new Node(headvalue);
  }

  LinkedList() {
    this.head = null;
  }

  public void append(int value) {
    if (head == null) {
      head = new Node(value);
      return;
    }
    Node c = head;
    while (c.next != null) {
      c = c.next;
    }
    c.next = new Node(value);
  }

  public void traverse() {
    if (head == null) {
      System.out.println("List is null.");
    }
    Node t = head;
    while (t != null) {
      System.out.print(t.value);
      if (t.next != null) {
        System.out.print(" => ");
      }
      t = t.next;
    }
  }
}