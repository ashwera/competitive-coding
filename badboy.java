import java.util.*;

public class badboy
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            String one = "";
            String two = "";
            //anton is at a,b
            //4 special cases for 4 corner.
            if (a==b&&m==n&&n==1&&a==1)
            {
                one = "1 1";
                two = one;
            }
            else if(a==b&&a==1) //top left corner 
            {
                //anton at 1,1
                one = n+" "+m;
                two = one;
                //one has  to be the opposite diagonal, two can be anything. 
            }
            else if(a==1&&b==m) //upper right corner
            {
                one = n+" "+1; //lower left
                two = one;
            }
            else if(b==1&&a==n) //lower left corner
            {
                one = 1 +" "+m; //upper right 
                two = one;
            }
            else if(a==n&&b==m) //lower right corner
            {
                one = "1 1";
                two = one;
            }
            else
            {
                //locate farthest diagonal pairs
                //one pair is 1,1 and n,m
                //other pair is 1,m and n,1 
                //shortest distance should be highest among the pair. 
                int dist1 = (a-1)+(b-1);
                int dist2 = (n-a) + (m-b);
                int effective = Math.min(dist1,dist2);
                dist1 = (a-1) + (m-b);
                dist2 = (n-a) + (b-1);
                int effective2 = Math.min(dist1,dist2);
                if (effective>effective2)
                {
                    one = "1 1";
                    two = n+" "+m;
                }
                else  
                {
                    one = "1 "+m;
                    two = n+" 1";
                }
            }
            System.out.println(one+" "+two);
        }   
        sc.close();
    }
}