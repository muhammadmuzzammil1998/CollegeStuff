class Stack {
  int[] stack;
  int count = 0;
  int limit;

  public Stack(int size) {
    stack = new int[size];
    limit = size;
  }

  public void push(int data) {
    if (isOverflow()) {
      System.err.println("Stack full. Reached maximum limit defined.");
      return;
    }
    stack[count++] = data;
  }

  public boolean isOverflow() {
    return count == limit;
  }

  public boolean isUnderflow() {
    return count == 0;
  }

  public int pop() {
    if (isUnderflow()) {
      System.err.println("Stack empty.");
      return 0;
    }
    int peek = peek();
    stack[--count] = 0;
    return peek;
  }

  public int peek() {
    return stack[count - 1];
  }

  public int length() {
    return count;
  }

  public int limit() {
    return limit;
  }

  @Override
  public String toString() {
    String out = "";
    for (int i : stack) {
      out += i + " ";
    }
    return out;
  }
}

class Queue {
  Stack upper = new Stack(5);
  Stack lower = new Stack(5);

  public void enqueue(int data) {
    if (lower.length() < lower.limit()) {
      while (!upper.isUnderflow()) {
        lower.push(upper.pop());
      }
    }
    if (!upper.isOverflow()) {
      upper.push(data);
    }
  }

  public void dequeue() {
    if (upper.length() == 1 && lower.isUnderflow()) {
      upper.pop();
    }
    Stack temp = new Stack(lower.limit() + 1);
    while (lower.length() > 0) {
      temp.push(lower.pop());
    }
    if (!temp.isUnderflow())
      temp.pop();
    while (!temp.isUnderflow()) {
      lower.push(temp.pop());
    }
  }

  @Override
  public String toString() {
    if (upper.length() == 1 && lower.isUnderflow()) {
      return String.format("%s%s", upper, lower);
    }
    if (lower.length() < 5) {
      Stack t = lower;
      String out = "";
      while (!t.isUnderflow()) {
        out += t.pop() + " ";
      }
      return out;
    }
    return String.format("%s%s", lower, upper);
  }
}

class QueueUsingStack {
  public static void main(String[] args) {
    Queue q = new Queue();
    q.enqueue(34);
    q.enqueue(56);
    q.enqueue(23);
    q.enqueue(67);
    q.enqueue(37);
    q.enqueue(10);
    q.dequeue();
    q.enqueue(20);
    q.enqueue(25);
    q.enqueue(23);
    q.enqueue(26);
    q.enqueue(29);
    System.out.println(q);
  }
}