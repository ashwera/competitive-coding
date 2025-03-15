import java.util.*;

public class good
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int [] arr = new int[n];
            int count = 1;
            for(int i = 0 ; i < n ; i++)
            {
                arr[i] = sc.nextInt();
                // see the number of continuous eves and odds. for each such stream, value is streamlength-1.
            }
            for(int i = 0 ; i < n-1 ; i++)
            {
                //stream check
                if(arr[i]%2==0&&arr[i+1]%2==0)
                {
                    count++;
                }
                else if (arr[i]%2!=0 && arr[i+1]%2!=0)
                {
                    count++;
                }
            }
            System.out.println(count-1);
        }
        sc.close();
    }
}
