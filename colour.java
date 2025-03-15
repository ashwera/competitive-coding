import java.util.*;

public class colour
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int countofodd = 0 ; 
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) 
            {
                arr[i] = sc.nextInt();
                if(arr[i]%2!=0)
                {
                    countofodd++;
                }
            }
            if(countofodd%2==0)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
        sc.close();
    }
}