import java.util.*;

public class goals
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n-1];
            int sum=0;
            for(int i = 0 ; i < n-1 ; i++)
            {
                ar[i] = sc.nextInt();
                sum+=ar[i];
            }
            System.out.println(-1*sum);
        }
        sc.close();
    }
}