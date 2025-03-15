import java.util.*;

public class tperm
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            if((n==a)&&(a==b)||a+b+1 < n)
            System.out.println("yes");
            else
            System.out.println("no");
        }
        sc.close();
    }
}
