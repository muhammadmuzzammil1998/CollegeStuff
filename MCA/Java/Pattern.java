class Pattern {
    static void pattern(int digits) {
        String indent = "";
        for (int i = 1; i <= digits; i++) {
            System.out.print(indent);
            indent = " ".repeat(i);
            for (int j = digits; j >= i; j--) {
                System.out.print(j);
            }
            for (int j = digits; j >= i; j--) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        pattern(9);
        pattern(5);
        pattern(3);
    }
}
