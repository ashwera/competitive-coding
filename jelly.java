import java.math.BigInteger;
import java.util.*;

public class jelly
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            BigInteger difference = BigInteger.ZERO;
            int[] ar = new int[n];
            for(int i = 0 ; i < n ;  i++)
            {
                ar[i] = sc.nextInt();
                int temp = ar[i];
                if(temp>=a)
                difference = difference.add(BigInteger.valueOf(a-1));
                else
                difference = difference.add(BigInteger.valueOf(temp));
            }           
            difference = difference.add(BigInteger.valueOf(b));
            System.out.println(difference);
        }
        sc.close();
    }
}