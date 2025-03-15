import java.util.*;

public class luntik
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int onecount=0;
            int zerocount=0;
            for(int i = 0 ; i < n ; i++)
            {
                arr[i] = sc.nextInt();
                if(arr[i]==1)
                onecount++;
                else if (arr[i]==0)
                zerocount++;
            }
            long ans = (long)Math.pow(2,zerocount);
            ans*=onecount;
            System.out.println(ans);
        }
        sc.close();
    }
}
