import java.util.*;

public class hardproblem
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int m = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int rem = 0 ;
            int forc = 0 ;

            //first row 
            if (a >= m)
            {
                //some a or none a will be left over
                rem += a-m ;
                // System.out.println(rem);
            }
            else
            {
                forc += m-a;
            }

            if( b>=m)
            {
                rem+=b-m;
                // System.out.println(rem);
            }
            else
            {
                forc+=m-b;
            }
            
            if(c>=forc)
            {
                rem+=c-forc;
            }

            System.out.println(a+b+c-rem);
        }
        sc.close();
    }
}
