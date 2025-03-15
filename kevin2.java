import java.util.*;

public class kevin2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] arr = new int[n];
            int a = 1 ; 
            for(int i = 0 ; i < n ; i++ )
            {
                arr[i] = 0;
                // System.out.print(arr[i]+"*");
            }
            for(int i = k-1 ; i < n ; i+=k)
            {
                arr[i] = a;
                a++;
            }
            for(int i = 0 ; i < n ; i++)
            {
                if(arr[i]==0)
                {
                    arr[i] = a;
                    a++;
                }
                System.out.print(arr[i]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
