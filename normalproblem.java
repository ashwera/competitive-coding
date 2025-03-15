import java.util.*;

public class normalproblem
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            int l = s.length();
            String t = "";
            for(int i = l-1 ; i >= 0; i--)
            {
                char ch = s.charAt(i);
                if (ch=='q')
                t = t + 'p';
                else if(ch=='p')
                t = t + 'q';
                else
                t = t + ch;
            }
            System.out.println(t);
        }
        sc.close();
    }
}
