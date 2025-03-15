import java.util.*;

public class divby25 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            String n = sc.next();
            int len = n.length();
            int minMoves = Integer.MAX_VALUE;

            for (int i = len - 1; i >= 0; i--) {
                for (int j = i - 1; j >= 0; j--) {
                    int digit2 = n.charAt(i) - '0';
                    int digit1 = n.charAt(j) - '0';

                    if ((digit1 == 2 && digit2 == 5) || // 25
                        (digit1 == 7 && digit2 == 5) || // 75
                        (digit1 == 5 && digit2 == 0) || // 50
                        (digit1 == 0 && digit2 == 0)) { // 00
                        int moves = (len - 1 - i) + (i - 1 - j);
                        minMoves = Math.min(minMoves, moves);
                    }
                }
            }
            System.out.println(minMoves);
        }
        sc.close();
    }
}
