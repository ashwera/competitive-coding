import java.util.*;

public class qu
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            HashSet<Integer> distinctValues = new HashSet<>(n);
            for(int i=0;i<n;i++)
            {
                ar[i] = sc.nextInt();
                distinctValues.add(ar[i]);
            }

            Integer[] sortedDistinct = distinctValues.toArray(new Integer[0]);
            int d = sortedDistinct.length; //converted treeset to array 

            if (d > 3)  //if there are three or more than three different integers,
            {
                System.out.println(n - 3 - (n%2)); // We need to change the rest to any of these
            } 
            else 
            {
                // If we have less than three distinct values
                System.out.println(0); // No changes needed
            }

        }
    }
}