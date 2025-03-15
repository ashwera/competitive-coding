import java.math.BigInteger;
import java.util.*;

public class LongestDivisorsInterval
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        int test = sc.nextInt();
        while(test-->0)
        {
            int size = 0 ; 
            BigInteger n = sc.nextBigInteger();
            if(n.mod(BigInteger.TWO).compareTo(BigInteger.ONE)==0)
            {
                System.out.println(1);
            }
            else{
            BigInteger i = BigInteger.ONE;
            BigInteger sqrtN = BigInteger.valueOf((long) Math.sqrt(n.doubleValue()));
            sqrtN = sqrtN.add(BigInteger.ONE);
            while(i.compareTo(sqrtN)<=0) //if i is less than or equal to n
            {
                if(n.mod(i).compareTo(BigInteger.ZERO)==0) // if n%i==0
                {
                    size++;
                }
                else
                {
                    break;
                }
                i = i.add(BigInteger.ONE);
            }
            System.out.println(size);
        }
        }
        sc.close();
    }
}
