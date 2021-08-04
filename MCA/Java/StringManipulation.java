public class StringManipulation {
    public static void main(String[] args) {
        String str = "   muz   a  mmil  ";
        String output;

        output = str.replaceAll(" ", "");
        System.out.println("Removed spaces:\t\t" + output);

        output = output.toUpperCase();
        System.out.println("Changed case:\t\t" + output);

        output = "My name is ".concat(output);
        System.out.println("Concatenated strings:\t" + output);

        System.out.println("Z is located at:\t" + output.indexOf("Z", 0));
    }
}
