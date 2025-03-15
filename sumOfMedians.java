import java.util.*;

public class sumOfMedians
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            long[] arr = new long[n*k];
            long sum = 0 ;
            if(n==2)
            {
                for(int i=0;i<(n*k);i++)
                {
                    arr[i] = sc.nextLong();
                    if (i%2==0)
                    {
                        sum+=arr[i];
                    }
                }
            }
            else
            {
                long half = n/2;
                //skip count by half after skipping k inputs 
                for(int i=0;i<(n*k);i++)
                {
                    arr[i] = sc.nextLong();
                }

                int skip = (n%2==0)? k*((n/2)-1) : k*(n/2);
                
                for(int i = skip ; i  < (n*k) ;i++)
                {
                    sum+=arr[i];
                    i+=half;
                }
            }
            System.out.println(sum);
        }
        sc.close();
    }
}