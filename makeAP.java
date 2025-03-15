import java.util.*;

public class makeAP
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            boolean isAP = false;
            int diff1 = b-a;
            int diff2 = c-b;
            int wannabeC = diff1+b;
            int wannabeA = b - diff2;
            //if the middle term is out of order.
            if((c+a)%(2*b)==0)
            {
                isAP=true;
                // System.out.println("middle term case");
            }
            else if ((diff1==0&&b%c==0&&b!=1)||(diff2==0&&b%a==0&&b!=1))
            {
                isAP=true;
                // System.out.println("x x x case");
            }
            //wannabeA is 2b-c 
            //wannabeC is 2b-a
            else if(wannabeA>0&&wannabeA%a==0)
            {
                // System.out.println("first term");
                // System.out.println(wannabeA);
                isAP = true;
            }
            else if ((wannabeC>0&&wannabeC%c==0))
            {
                isAP=true;
                // System.out.println("Last term");
            }
            if(isAP)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
        sc.close();
    }
}
