import java.util.*;

public class walk
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = sc.nextInt();
            //d-b toh karna hi padega. 
            //jitna bhi d-b hai, utna add to a. then find dist between a and c. 
            if(d<b)
            {
                System.out.println(-1);
                continue;
            }
            int walked = d-b;
            a = a+walked;
            if (a<c)
            {
                System.out.println(-1);
                continue;
            }
            int dist = Math.abs(a-c);
            walked+=dist;
            if (walked>=0)
            System.out.println(walked);
            else
            System.out.println(-1);
        }
        sc.close();
    }
}
