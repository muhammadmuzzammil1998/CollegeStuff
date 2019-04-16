class Sender {
  int sid;

  Sender(int senderID) {
    this.sid = senderID;
  }

  public void send(String message) {
    System.out.println("Sending message by: " + sid);
    System.out.println("Message: " + message);
    for (int i = 0; i < 7; i++) {
      System.out.print(".");
      try {
        Thread.sleep(1000);
      } catch (Exception exp) {
        System.out.println("Unable to send message.");
      }
    }
    System.out.print("\rMessage sent...\n");
  }
}

class SendSync implements Runnable {
  private Sender sender;
  private String message;

  SendSync(String message, Sender sender) {
    this.message = message;
    this.sender = sender;
    System.out.println("=> Created Thread");
  }

  public void run() {
    synchronized (sender) {
      sender.send(this.message);
    }
  }

  synchronized public void start() {
    this.run();
  }
}

class Thread2 {
  public static void main(String[] args) {
    Sender sender = new Sender(1234);
    new SendSync("Hello", sender).start();
    new SendSync("Goodbye", sender).start();
  }
}