import java.util.*;

public class duplicate
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
            int product = 1;
            int answer = Integer.MAX_VALUE;
            boolean flag = false;
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
                
                if(arr[i]==k)
                {
                    answer = 0  ;
                    flag = true;
                }

                if(!flag)
                {
                    product*=arr[i];
                    int difference = k - (arr[i]%k);
                    answer = Math.min(answer , difference);
                    // System.out.println(answer);
                }
            }
            // System.out.println(product);
            if(product%k==0)
            {
                answer = 0 ;
            }
            
            if(k==4&&answer!=0)
            {
               answer--;
            }
            System.out.println(answer);
        }
        sc.close();
    }
}