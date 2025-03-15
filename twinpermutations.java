import java.util.*;

public class twinpermutations
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int[] arr2 = new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
                arr2[i] = n+1-arr[i];
            }
            for(int i:arr2)
            {
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
}