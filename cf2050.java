import java.util.*;

public class cf2050
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            boolean flag =true;
            int sum = 0 ;
            int[] a = new int[n];
            for ( int i = 0 ; i < n ; i++ )
            {
                a[i] = sc.nextInt();
                sum+=a[i];
            }
            
            if(sum%n == 0 && flag)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
        sc.close();
    }
}