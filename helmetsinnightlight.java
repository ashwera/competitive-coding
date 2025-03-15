import java.util.*;

public class helmetsinnightlight
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int p = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            //only save the ones less than p
            int cost = p;
            //first announcement toh p cost se hi hoga.
            //now you have n-1 log to offer

            for(int i=0;i<n;i++)
            {
                a[i] = sc.nextInt();
            }

            for(int i = 0 ; i < n ; i++)
            {
                b[i] = sc.nextInt();
                if(b[i]>=p)
                {
                    b[i] = -1;
                    a[i] = -1;
                }
            }
            //if n is one, kahani khatam
            if(n==1)
            {
                System.out.println(cost);
                continue;
            }

            int tempcosts=0;
            int sum=0;
            for(int i = 0 ; i < n ; i ++)
            {
                //non negative array entries mein se find a[i]s which sum up to n-1
                //check for product of b[i] and a[i] till a[i]s sum up to n-1
                //store minimum product in tempcosts and add to costs when estimated. 
            }   
        }
        sc.close();
    }
}