import java.util.*;

public class quint
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        outer:
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            ar[0] = sc.nextInt();
            boolean flag = true;
            for(int i = 1 ; i < n ; i++)
            {
                ar[i] = sc.nextInt();
                int dif = Math.abs(ar[i]-ar[i-1]);
                if(dif!=5&&dif!=7)
                {
                    flag = false;
                }
            }
            if(flag)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
        sc.close();
    }
}
