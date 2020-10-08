public class StudentStatic {
  static String course = "BCA";
  String name;
  int roll;

  StudentStatic(String name, int roll) {
    this.name = name;
    this.roll = roll;
  }

  static void PrintName(StudentStatic stu) {
    System.out.println(stu.name + ", Roll no. " + stu.roll);
  }

  public static void main(String[] args) {
    StudentStatic stu = new StudentStatic("Muzzammil", 8);
    System.out.println("Course: " + course);
    PrintName(stu);
  }
}
