import java.util.*;

public class prep
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            String ar = sc.next();
            int ans = n;
            for(int i = 0 ; i < (n/2) ; i++)
            {
                if((ar.charAt(i)=='1'&&ar.charAt(n-1-i)=='0')||(ar.charAt(i)=='0'&&ar.charAt(n-1-i)=='1'))
                {
                    ans-=2;
                }
                else
                break;
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
