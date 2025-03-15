import java.util.*;

public class mochaandmath
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            //catch, ANDing a number repeatedly will NEVER increase and value
            //so to find the minimal possible max and value, just and all together. 
            //the max and value is never increasing with increase in elements.
            //anding any two huge ass values will only condense. hence we will get hte max vlaue reduced. so just and everything up. even if you have 1 and something, anding it will give 0


            int n = sc.nextInt();
            int[] ar = new int[n];
            int and=Integer.MAX_VALUE;
            for ( int i = 0 ; i < n ; i++ )
            {
                ar[i] = sc.nextInt();
                and = and & ar[i];
            }
            System.out.println(and);
        }
        sc.close();
    }
}