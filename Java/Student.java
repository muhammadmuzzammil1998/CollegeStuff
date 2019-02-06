public class Student {
  public int Roll_no;
  public String Name;

  public void Set(int rollno, String name) {
    this.Roll_no = rollno;
    this.Name = name;
  }

  public String GetName() {
    return this.Name;
  }

  public int GetRollNo() {
    return this.Roll_no;
  }

  public static void main(String[] args) {
    Student std = new Student();
    std.Set(8, "Muzzammil");
    System.out.println("Roll No: " + std.GetRollNo() + "\nName: " + std.GetName());
  }
}
