import java.util.*;

public class xormixup
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int xor;
            List <Integer> arr = new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                int temp = sc.nextInt();
                arr.add(temp);
            }
            xor = arr.get(0);
            for(int i=1;i<n;i++)
            {
                int temp = arr.get(i);
                xor = xor^temp;
            }
            for(int i : arr )
            {
                int val = xor^i;
                if(arr.contains(val))
                {
                    System.out.println(i);
                    break;
                }
            }
            // System.out.println(xor);
        }
        sc.close();
    }
}
