// Q: Print Numbers from 5 to 1 (Recursion)

public class Practice4 {
    public static void printNum (int n) {
        if (n == 0) {
            return;
        }
        System.out.println(n);
        printNum(n - 1);
    }

    public static void main(String[] args) {
        int n = 5;
        printNum(n);
    }
}
