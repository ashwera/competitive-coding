import java.util.*;

public class Olya
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            long n = sc.nextLong();
            long minofAll = Long.MAX_VALUE;
            long sum = 0;
            long minofAllseconds = Long.MAX_VALUE;
            for(long i = 0 ; i < n ; i++)
            {
                int s = sc.nextInt();
                long[] a = new long[s];
                for(int j = 0 ; j < s ; j++)
                {
                    a[j] = sc.nextLong();
                }
                Arrays.sort(a);
                sum += a[1]; //add secondlargest of all subarrays
                minofAllseconds = Math.min(minofAllseconds, a[1]); 
                minofAll = Math.min(minofAll,a[0]);
            }   
            sum+=minofAll;
            sum-=minofAllseconds;
            // System.out.println(minofAllseconds);
            // System.out.println(minofAll);
            System.out.println(sum);
        }
        sc.close();
    }
}