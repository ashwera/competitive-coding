import java.util.*;

public class desorting
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            ar[0] = sc.nextInt();
            int mindif = Integer.MAX_VALUE; 
            for(int i = 1; i < n ; i++)
            {
                ar[i] = sc.nextInt();
                if((ar[i]-ar[i-1])<mindif)
                mindif = ar[i] - ar[i-1];
            }
            if(mindif%2==0)
            mindif+=1;
            
            int ops = Math.ceilDiv(mindif, 2);
            if(ops<0)
            ops=0;
            System.out.println(ops);
        }
        sc.close();
    }
}