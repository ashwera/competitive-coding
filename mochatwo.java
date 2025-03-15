import java.util.Scanner;

public class mochatwo {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int test = scanner.nextInt();
        while(test-->0)
        {int n = scanner.nextInt();
        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        
        
        if (hasGcdLessThanThree(a)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
    scanner.close();}

    private static boolean hasGcdLessThanThree(int[] a) {
        for (int i = 0; i < a.length; i++) {
            for (int j = i + 1; j < a.length; j++) {
                if (gcd(a[i], a[j]) < 3) {
                    return true;
                }
            }
        }
        return false;
    }

    private static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
