import java.util.*;

public class excitingbets
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long gcd = (long)Math.abs(a-b);

            if(a==b)
            {
                System.out.println("0 0");
            }

            //difference is the gcd
            else
            {
                long min = Math.min(a, b);
                long x = 0;
                if(min > gcd) //make min less than gcd
                {
                    x = min%gcd;
                    min = Math.min(min,x);
                }
                //this is the new minimum value and isse subtract karna hai
                long moves = Math.min(min,Math.abs(gcd-min));
                System.out.println(gcd+" "+moves);
            }
        }
        sc.close();
    }
}