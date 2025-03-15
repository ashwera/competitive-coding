import java.util.*;

public class permut
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            int[] br = new int[n];
            ar[0] = sc.nextInt();
            br[0]=ar[0];
            for(int i = 1 ; i < n ; i++)
            {
                ar[i] = sc.nextInt();
                br[i] = ar[i];
            }
            //jahan ascending tootey, swap element
            
           boolean swapped = false;
                for (int i = 0; i < n - 1; i++)  //run thru as length
                {
                    int sum = ar[i] + br[i];
                    int nextSum = ar[i + 1] + br[i + 1]; 
                    if (sum > nextSum) 
                    {
                        //condition wrong. 
                        int temp = br[i];
                        br[i] = br[i + 1];
                        br[i + 1] = temp;
                        swapped = true; // Indicate that a swap was made
                    }
                    if(i==n-1 && swapped)
                    i=0;
                }
            
            // Repeat until no swaps are made
                //jahan ascending order tootey, wo element last swap with last asc element
            
            for(int  j:br)
            {
                System.out.print(j+" ");
            }

        }
        sc.close();
    }
}
