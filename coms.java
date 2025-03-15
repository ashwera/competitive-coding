import java.util.*;

public class coms
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            String s = sc.next();
            int count = 1;
            int max = 1 ;
            for(int i = 0 ; i < n-1 ; i++)
            {
                if(s.charAt(i)==s.charAt(i+1))
                {
                    count++;
                    max = Math.max(count, max);
                }
                else
                {
                    count = 1;
                }
            }
            System.out.println(max+1);
        }
        sc.close();
    }
}
