import java.util.*;

public class forb
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while ( test-- > 0 )
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int x = sc.nextInt();

            if(x!=1)
            {
                System.out.println("Yes");
                System.out.println(n);
                for(int i=0;i<n;i++)
                {
                    System.out.print(1+" ");
                }
                System.out.println();
            }

            //if x is one, we have 2 options. if n is even , n/2 times 2
            //if n is odd, and k can have 3, print n/2-1 times 2 and once three
            else if (n%2==0&&k>1)
            {
                System.out.println("Yes");
                System.out.println(n/2);
                for (int i = 0; i < n/2; i++) 
                {
                    System.out.print(2+" ");
                }
                System.out.println();
            }
            else if(k>2)
            {
                System.out.println("Yes");
                System.out.println(n/2);
                for (int i = 0; i < ((n/2)-1); i++) 
                {
                    System.out.print(2+" ");
                }
                System.out.print(3);
                System.out.println();
            }
            else
            System.out.println("No");
        }
        sc.close();
    }
}