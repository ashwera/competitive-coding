import java.util.*;

public class newc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            int n = sc.nextInt();
            int q = sc.nextInt();
            int ogsum = 0;
            int[] ar = new int[n];
            int[] prefixSum = new int[n + 1];

            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
                ogsum += ar[i];
                prefixSum[i + 1] = prefixSum[i] + ar[i];
            }

            for (int i = 0; i < q; i++) 
            {
                int l = sc.nextInt() - 1;
                int r = sc.nextInt() - 1;
                int k = sc.nextInt(); //value to which we change
                // Get sum of subarray from l to r using prefix sums
                int sum = prefixSum[r + 1] - prefixSum[l];
                //right plus 1 will have sum of all larger elements.
                //left will have sum of all elements before l

                // Calculate total of replacements
                int nok = k * (r - l + 1);

                // Check conditions
                if (ogsum % 2 != 0) { // if original sum was odd
                    if (sum % 2 == 0 && nok % 2 == 0 || sum % 2 != 0 && nok % 2 != 0) {
                        System.out.println("Yes");
                    } else {
                        System.out.println("No");
                    }
                } else { // if original sum was even
                    if (sum % 2 != 0 && nok % 2 == 0 || sum % 2 == 0 && nok % 2 != 0) {
                        System.out.println("Yes");
                    } else {
                        System.out.println("No");
                    }
                }
            }
        }
        sc.close();
    }
}
