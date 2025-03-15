import java.util.*;

public class maximise
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            int l = s.length();
            // int[] res = new int[l];
            boolean madechanges = false;
            String[] ar = s.split("");
            for(int i = 0 ; i < l-1 ; i++)
            {
                int lhs = Integer.parseInt(ar[i]);
                int rhs = Integer.parseInt(ar[i+1]);
                if((lhs+1) < rhs)
                {
                    // res[i] = rhs-1;
                    ar[i+1] = ar[i];
                    ar[i] = Integer.toString(rhs-1);
                    madechanges = true;
                }

                if(i==l-2 && madechanges)
                {
                    i=-1;
                    madechanges=false;
                }
            }
            for(String k : ar)
            {
                System.out.print(k);
            }
        System.out.println();
        }
        sc.close();
    }
}
