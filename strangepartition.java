import java.util.*;

public class strangepartition
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            long x = sc.nextInt();
            long[] arr = new long[n];
            long maxbeauty = 0 ; 
            long minbeauty;
            long sum=0;
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
                maxbeauty += Math.ceil(arr[i]/(double)x);//no operation will increase maxbeauty
                sum += arr[i];
            }
            minbeauty = (long)Math.ceil(sum/(double)x);
            System.out.println(minbeauty+" "+maxbeauty);
        }
        sc.close();
    }
}