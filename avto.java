import java.math.*;
import java.util.*;

public class avto
{
    public static void main(String[] args)
    {
        BigInteger min;
        BigInteger max;
        BigInteger twoaxle = BigInteger.ZERO;
        BigInteger threeaxle = BigInteger.ZERO;
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            BigInteger n = sc.nextBigInteger();
            if(n.mod(BigInteger.TWO).equals(BigInteger.ONE) || n.equals(BigInteger.TWO)) //is odd or prime
            {
                System.out.println(-1);
            }
            else
            {
               //calculate max
                // if(n.mod(BigInteger.valueOf(4)).equals(BigInteger.ZERO))
                max = n.divide(BigInteger.valueOf(4));
                // else
                // max = n.divide(BigInteger.valueOf(4)).add(BigInteger.ONE);

                //calculate min
                if(n.mod(BigInteger.valueOf(6)).equals(BigInteger.ZERO))
                min = n.divide(BigInteger.valueOf(6));
                else
                min = n.divide(BigInteger.valueOf(6)).add(BigInteger.ONE);

                System.out.println(min+" "+max);
            }
        }
        sc.close();
    }
}