import java.util.*;

public class oddivisor
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        // outer:
        while(test-->0)
        {
            long n = sc.nextLong();
            
            // boolean hasOddDivisor = false;
            while(n%2==0)
            {
                n/=2;
            }
            
            if(n%2!=0&&n>1)
            {
                System.out.println("YES");
            }
            else
            System.out.println("NO");
            
        }
        sc.close();
    }
}