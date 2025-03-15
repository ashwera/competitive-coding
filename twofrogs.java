import java.util.*;

public class twofrogs
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        long test = sc.nextLong();
        outer:
        while(test-->0)
        {
            int n = sc.nextInt();
            long[] a = new long[n];
            long[] b = new long[n];
            boolean changed = false;
            long[] c = new long[n];
            for(int i=0;i<n;i++)
            {
                a[i] = sc.nextLong();
            }
            long diff=0;
            int index= -1;

            for(int i=0 ; i < n ; i++)
            {
                b[i] = sc.nextLong();
                c[i] = a[i]-b[i];
                if(c[i] < 0 && !changed)
                {
                    changed = true;
                    diff = c[i]; //deficit found
                    index = i ;
                    //cant have two deficits.
                }
                else if(c[i] < 0 && changed)
                {
                    //found two deficits
                    System.out.println("NO");
                    continue outer;
                }
            }

            diff = diff * (-1);
            // System.out.print(diff);
            //now this deficit hsa been made positive. you need this many surplus EVERYWHERE
            changed = false;

            for(int i = 0 ; i < n; i++)
            {
                // System.out.println(i);
                if(c[i] < diff && i!=index)
                {
                    changed = true;
                    break;
                    // System.out.println("HERE at "+i );
                    // System.out.println("NO");
                }
            }
            if(changed)
            System.out.println("NO");
            else
            System.out.println("Yes");
        }
        sc.close();
    }
}
