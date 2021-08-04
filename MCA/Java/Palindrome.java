public class Palindrome {
    public static void main(String[] args) {
        String rev = "";
        String org = args[0];
        for (int i = org.length(); i > 0; i--) {
            rev += org.charAt(i - 1);
        }
        if (rev.equals(org)) {
            System.out.println("String is palindrome");
        } else {
            System.out.println("String is not palindrome");
        }
    }
}
