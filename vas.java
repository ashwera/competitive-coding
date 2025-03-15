import java.math.BigInteger;
import java.util.*;

public class vas
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        outer:
        while(test-->0)
        {
            BigInteger n = sc.nextBigInteger();
            BigInteger k = sc.nextBigInteger();
            BigInteger minsum = k.multiply(k.add(BigInteger.ONE)).divide(BigInteger.TWO);
            // int dif = k*(k-1)/2;
            BigInteger x = sc.nextBigInteger();
            BigInteger maxsum = n.multiply(k).subtract(k.multiply(k.subtract(BigInteger.ONE)).divide(BigInteger.TWO));
            // System.out.println(minsum);
            // System.out.println(maxsum);
            if(x.compareTo(minsum)>=0&&x.compareTo(maxsum)<=0)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
        sc.close(); 
    }
}