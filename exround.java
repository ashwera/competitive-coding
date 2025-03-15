import java.util.*;

public class exround
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            n *= 2;
            int z=0;
            int o=0;
            int max = 0;
            int min = 0 ;
            int[] ar = new int[n];
            for(int i=0;i<n;i++)
            {
                ar[i] = sc.nextInt();
                if(ar[i]==0) 
                z++;
                else o++;
            }
            
                    min = (o%2 + z%2)/2;
                    max = Math.min(z,o);
            
            System.out.println(min+" "+max);
        }
        sc.close();
    }
}