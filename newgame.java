import java.util.*;

public class newgame
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            int n = s.length();
            int one = 0 ; 
            int zero = 0 ;
            for(int i = 0; i < n ;i++)
            {
                char ch = s.charAt(i);
                // System.out.println(ch);
                if(ch=='1')
                one++;
                else
                zero++;
            }
            int deletable = Math.min(zero,one);
            // System.out.println(deletable);
            if(deletable%2!=0 && deletable!=n)  
            System.out.println("DA");
            else
            System.out.println("NET");
        }
        sc.close();
    }
}