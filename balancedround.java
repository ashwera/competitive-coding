import java.util.*;

public class balancedround
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] ar = new int[n];
            int size = 0;
            int res = 0;
            for( int i = 0; i < n ; i++ )
            {
                ar[i] = sc.nextInt();
            }
            Arrays.sort(ar);
            //See the difference between consecs and if exceeding k, update max possible size so far. 
            //count sizes and update max size. then n-maxsize
            for (int i = 0; i < n-1; i++) 
            {
                if(ar[i+1]-ar[i]<=k)    
                {
                    size++;
                    // System.out.println("difference: "+(ar[i+1]-ar[i])+" and size so far = "+size);
                    res = Math.max(res,size);
                }
                else
                {
                    // System.out.println("OOPS");
                    size = 0;
                }
            }
            res++;
            System.out.println(n-res);
        }
        sc.close();
    }
}
