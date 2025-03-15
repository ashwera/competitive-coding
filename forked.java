import java.util.*;
 
public class forked
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String n = sc.next();
            int temp = 0;
            //find last 0 or 5 
            int i = n.length();
            i-=1;
            // outermost:
            while(i>=0)
            {
                int dig = n.charAt(i)-'0';
                if(dig==0||dig==5)
                {
                    i--;
                }
                else
                {
                    temp++;
                }
            }
            // innermost:
            while(i>=0)
            {
                int dig = n.charAt(i)-'0';
                if(dig==0||dig==5)
                {
                    i--;
                }
                else if (dig==7||dig==2)
                {
                    i--;
                }
                else
                {
                    temp++;
                }
            }
            System.out.println(n.substring(i,n.length()));
        }
    }
}