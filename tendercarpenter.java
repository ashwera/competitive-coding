import java.util.*;

public class tendercarpenter
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            arr[0] = sc.nextInt();
            boolean flag = false;
            for(int i=1 ; i<n ; i++)
            {
                arr[i] = sc.nextInt();
                int max = Math.max(arr[i],arr[i-1]);
                int min = Math.min(arr[i],arr[i-1]);
                if((2*min)>max)
                {
                    // System.out.println("here!");
                    flag = true;
                }
            }

            // if(!flag&&n!=2)
            // {
            //     for(int i = 0 ; i < n-2 ; i++)
            //     {
            //         int a = arr[i];
            //         int b = arr[i+1];
            //         int c = arr[i+2];
            //         if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
            //         {
            //             // System.out.println(a+""+b+""+c);
            //             // System.out.println("here");
            //             flag = true;
            //             break;
            //         }
            //     }
            // }

            if(flag)
            {
                System.out.println("Yes");
            }
            else
            {
                System.out.println("No");
            }
        }
        sc.close();
    }
}