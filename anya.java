import java.util.*;

public class anya {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            String s = sc.next();
            StringBuilder sb = new StringBuilder(s);
            int n = sc.nextInt();
            int len = s.length();

            for (int i = 0; i < n; i++) {
                int index = sc.nextInt();
                String value = sc.next();
                sb.setCharAt(index - 1, value.charAt(0));  // Update the character at the specified index

                // Only check around the modified index for "1100"
                boolean found = false;

                // Check the surrounding areas for "1100"
                for (int j = Math.max(0, index - 4); j <= Math.min(len - 4, index - 1); j++) 
                {
                    if (sb.substring(j, j + 4).equals("1100")) {
                        found = true;
                        break;
                    }
                }

                if (found) {
                    System.out.println("Yes");
                } else {
                    System.out.println("No");
                }
            }
        }
        sc.close();
    }
}
