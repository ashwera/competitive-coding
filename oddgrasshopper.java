import java.util.*;

public class oddgrasshopper
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            long x = sc.nextLong();
            long n = sc.nextLong();
            
            // for ( int i = 1 ; i <= n ; i++ )
            // {
            //     //ith jump
            //     //update position
            //     x = x + (x % 2 == 0 ? -i : i);
            // }
            //failed due to TLE

            if(x%2!=0&&n%2==0) //x odd n even
            {
                //dance between x and x-1
                //if multiple of 4, answer is x-1 else x
                if(n%4!=0)
                x = x-1;
            }
            else if(x%2==0&&n%2==0) //both are even
            {
                //dance between x and x+1
                if(n%4!=0)
                x = x+1;
            }
            else if(n%2!=0) //jump is odd
            {
                //two cases arise.
                if(x%2==0) //let's label this 10
                {
                    // two more cases arise
                    if ((n+1)%4==0) //let's label this case 3 in 10
                    {
                        long z = ((n-3)/4)+1;
                        x = x + 4*z;
                    }

                    else
                    {
                        //lets label this case 5 in 10
                        long z = (n-1)/4;
                        x = x - (4*z) - 1;
                    }
                }
                else //lets label this 7
                {
                    if((n+1)%4==0) //let's label this 3 in 7
                    {
                        long z = ((n-3)/4)+1;
                        x = x - 4*z;
                    }
                    else
                    {
                        //lets label this as 5 in 7
                        long z = (n-1)/4;
                        x = x + 1 + (4*z);
                    }
                }
            }
            System.out.println(x);
        }
        sc.close();
    }
}
