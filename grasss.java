import java.util.*;

public class grasss
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int x = sc.nextInt(); //destination
            int k = sc.nextInt(); //not divisible

            if(x%2!=0 && k==2) //tackled all odd two pairs
            {
                System.out.println(1);
                System.out.println(x);
            }

            else if(x<k)  //tackled useless k's
            {
                System.out.println(1);
                System.out.println(x);
            }

            else if(x%2==0) //for even pairs 
            {
                if (x == 2 && k == 2) 
                    {
                        System.out.println(2);
                        System.out.println("1 1");
                    }

                else if (x%k!=0)
                {
                    System.out.println(1);
                    System.out.println(x);
                }
                else
                {System.out.println(2);
                // System.out.println("im here");
                for(int i = 1 ; i <= (x/2) ; i++)
                {
                    // System.out.println(x-i);
                    // System.out.println(i);
                    // System.out.println(k);
                    if((x-i)%k!=0 && i%k!=0)
                    {
                        // System.out.println("Entered");
                        System.out.println((x-i)+" "+i);
                        break;
                    }
                }}
            }

            else //destination is odd. 
            {   //k cant be 2
                if(k%x!=0)
                {
                    System.out.println(1);
                    System.out.println(x);
                }
                else
                {
                    System.out.println(2);
                    System.out.println(x-1 + " " + 1);
                }
            }
        }
        sc.close();
    }
}