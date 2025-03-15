import java.util.*;

public class oddquery
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int q = sc.nextInt();
            int ogsum = 0 ;
            int[] ar = new int[n];
            int[] permutationsum = new int[n+1];
            for(int i = 0 ; i < n ; i++)
            {
                ar[i] = sc.nextInt();
                ogsum+=ar[i];
                permutationsum[i+1] = permutationsum[i]+ar[i];
            }

            for(int i = 0 ; i < q ; i++)
            {
                int l = sc.nextInt()-1;
                int r = sc.nextInt()-1;
                int k = sc.nextInt();
                //number of times k comes is r-l+1
                int nok = k*(r-l+1);
                // System.out.println(permutationsum[r+1]);
                // System.out.println(permutationsum[l]);
                int sum = permutationsum[r+1] - permutationsum[l] ; 
                // System.out.println(sum);
                if(ogsum%2!=0) //if originally the sum was odd.
                {
                    if(sum%2==0&&nok%2==0)
                    System.out.println("Yes");
                    else if (sum%2!=0&&nok%2!=0)
                    System.out.println("Yes");
                    else
                    System.out.println("No");
                }
                else
                {
                    if(sum%2!=0&&nok%2==0)
                    System.out.println("Yes");
                    else if (sum%2==0&&nok%2!=0)
                    System.out.println("Yes");
                    else
                    System.out.println("No");
                }
            }
        }
        sc.close();
    }
}