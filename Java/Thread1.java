class ThreadClass extends Thread {
  private Thread thread;
  private String name;
  private int priority, sleepTime;

  ThreadClass(String threadName, int priority, int sleepTime) {
    this.name = threadName;
    this.priority = priority;
    this.sleepTime = sleepTime;
    System.out.println("Created => " + this.name);
  }

  public void run() {
    System.out.println("Running => " + this.name);
    try {
      for (int i = 0; i <= 5; i++) {
        System.out.println("  " + this.name + " => i = " + i);
        System.out.println("Sleeping => " + this.name);
        System.out.println("  Sleeptime => " + this.sleepTime + "ms");
        Thread.sleep(this.sleepTime);
      }
    } catch (InterruptedException exp) {
      exp.printStackTrace();
    }
    System.out.println("Exiting => " + this.name);
  }

  public void start() {
    System.out.println("Starting => " + this.name);
    if (this.thread == null) {
      this.thread = new Thread(this, this.name);
      this.thread.setPriority(this.priority);
    }
    thread.start();
  }
}

class Thread1 {
  public static void main(String[] args) {
    new ThreadClass("Thread 1", 10, 2000).start();
    new ThreadClass("Thread 2", 5, 1000).start();
    // for (int i = 1; i <= 10; i++) {
    // new ThreadClass("Thread " + i, i, i * 100).start();
    // }
  }
}