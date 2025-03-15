import java.util.*;

public class cointrans
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            double n = sc.nextLong();
            if(n<4)
            {
                System.out.println(1);
                continue;
            }
            else if(n==4)
            {
                System.out.println(2);
                continue;
            }
            double logvalue = Math.log(n)/Math.log(2.0);  
            // System.out.println(logvalue);   
            logvalue = Math.floor(logvalue/2.0); 
            // System.out.println(logvalue);
            System.out.println((int)Math.pow(2,logvalue));
        }
        sc.close();
    }
}