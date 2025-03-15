import java.util.*;

public class grass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        
        while (test-- > 0) {
            int x = sc.nextInt(); // destination
            int k = sc.nextInt(); // not divisible

            if (x % k != 0) {
                // If x is not divisible by k, one jump is enough
                System.out.println(1);
                System.out.println(x);
            } else {
                // If x is divisible by k, two jumps are needed
                System.out.println(2);
                System.out.println((x - 1) + " " + 1);
            }
        }
        sc.close();
    }
}