import java.math.BigInteger;
import java.util.*;

public class coins
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            BigInteger n = sc.nextBigInteger();
            BigInteger k = sc.nextBigInteger();
            // if(n%k==0)
            // System.out.println("Yes");
            // else if (n%2==0)
            // System.out.println("Yes");
            // else if(k%2!=0&&n%2!=0)
            // System.out.println("Yes");
            if (n.mod(k).equals(BigInteger.ZERO)) 
            System.out.println("Yes");
            else if (n.mod(BigInteger.TWO).equals(BigInteger.ZERO))
            System.out.println("Yes");
            else if (k.mod(BigInteger.TWO).equals(BigInteger.ONE) && n.mod(BigInteger.TWO).equals(BigInteger.ONE)) 
            System.out.println("Yes");   
            else
            System.out.println("No");
        }
        sc.close();
    }
}
