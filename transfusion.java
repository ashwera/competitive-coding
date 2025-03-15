import java.util.*;

public class transfusion
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
            long sum = 0;
            // boolean flag = true;
            long oddsum=0;
            long oddno=0;
            long evenno=0;
            long evensum=0;
            for(int i=0;i<n;i++)
            {
                ar[i] = sc.nextInt();
                sum+=ar[i];
                if(i%2==0)
                {
                    evensum+=ar[i];
                    evenno++;
                }
                else
                {
                    oddsum+=ar[i];
                    oddno++;
                }
            }
            double res = sum/(double)n;
            if(res%1==0)
            {
                if(evensum==(res*evenno)&&oddsum==(res*oddno))
                System.out.println("Yes");
                else
                System.out.println("No");
            }
            else
            {
                System.out.println("No");
            }
        }
        sc.close();
    }
}
