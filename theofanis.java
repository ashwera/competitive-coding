import java.util.*;

public class theofanis {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of test cases:");
        int test = sc.nextInt();
        while (test != 0) {
            System.out.println("Enter value of n: ");
            int n = sc.nextInt();
            System.out.println("Enter the value of k: ");
            int k = sc.nextInt();
            if (k == 1) {
                System.out.println("No");
                continue;
            }
            System.out.println("Enter array elements. : ");
            int[] array = new int[n];
            for (int i = 0; i < n; i++) {
                array[i] = sc.nextInt();
            }

            boolean isSorted = false;
            for (int i = 0; i < n; i++) {
                for (int j = 1; j <= Math.min(k, n - i); j++) {
                    int[] subArray = Arrays.copyOfRange(array, i, i + j);
                    Arrays.sort(subArray);
                    System.arraycopy(subArray, 0, array, i, j);
                    if (isAscending(array)) {
                        System.out.println("Yes");
                        isSorted = true;
                        break;
                    }
                }
                if (isSorted) {
                    break;
                }
            }
            if (!isSorted) {
                System.out.println("No");
            }
        }
        test--;
        sc.close();
        System.exit(0);
    }

    public static boolean isAscending(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
}