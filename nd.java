import java.util.*;

public class nd
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int[] output = new int[n];
            arr[0] = sc.nextInt();
            if(arr[0]==1)
            arr[0]++;
            output[0] = arr[0];
            for(int i = 1 ; i < n ; i++)
            {
                arr[i] = sc.nextInt();
                if(arr[i]==1)
                arr[i]++;
                if(arr[i]%output[i-1]==0)
                {
                    output[i] = arr[i]+1;
                }
                else
                {
                    output[i] = arr[i];
                }
            }
            for(int i:output)
            {
                System.out.print(i+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
