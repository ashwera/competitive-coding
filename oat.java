import java.util.*;

public class oat
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        outer:
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            int count = 0 ;
            for(int i = 0 ; i < n ; i++)
            {
                ar[i] = sc.nextInt();
                if(ar[i]==2)
                count++;
                //count the middle value of twos. if there are 2 twos, break at the 2nd one and so on. 
            }
            if(count%2!=0) //odd count
            {
                System.out.println(-1);
                continue outer;
            }
            else if (count==0)
            {
                System.out.println(1);
                continue outer;
            }
            count = count/2 ; 
            int nc = 0 ; 
            //kitni baar 2 miley ki index mile;
            int k = 0 ;
            for(int i = 0 ; i < n ; i++)
            {
                if(ar[i]==2)
                nc++;
                if(nc==count)
                {
                    k = i;
                    break;
                }
            }
            System.out.println(k+1);
        }
        sc.close();
    }
}