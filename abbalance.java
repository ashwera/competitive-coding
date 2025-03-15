import java.util.*;

public class abbalance
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            char firstchar = s.charAt(0);
            int l = s.length();
            char lastchar = s.charAt(l-1);
            if(lastchar!=firstchar)
            {
                s = s.substring(0,l-1) + firstchar;
            }
            System.out.println(s);
        }
        sc.close();
    }
}