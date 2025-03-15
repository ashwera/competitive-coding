import java.util.*;
public class cf1
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            String s = sc.next();
            boolean canReach = false;
            int up=0;
            int right=0;
            for(int i = 0 ; i < n ; i++ )
            {
                char ch = s.charAt(i);
                if(up==a&&right==b)
                canReach = true;
                if(ch == 'N')
                up++;
                else if(ch=='S')
                up--;
                else if(ch=='E')
                right++;
                else
                right--;
            }
            // System.out.println(right);
            // System.out.println(up);
            //in one cycle, we reach (right,up)
            //remaining rights and remaining ups?
            if(!canReach && right != 0 && up != 0)
            {
            int fullcycles = Math.min(a / right, b / up);
            int remainingRights = a - (fullcycles * right);
            int remainingUps = b - (fullcycles * up);
            // System.out.println(remainingRights);
            // System.out.println(remainingUps);
            if(remainingRights==0&&remainingUps==0)
            {
                canReach = true;
                System.out.println("YES");
                continue;
            }
            
            int currentUp = 0, currentRight = 0;
            for (int i = 0; i < n; i++) 
            {
                char ch = s.charAt(i);
                if (ch == 'N') currentUp++;
                else if (ch == 'S') currentUp--;
                else if (ch == 'E') currentRight++;
                else currentRight--;
                
                // Check if we reach the required leftover
                if (currentRight == remainingRights && currentUp == remainingUps) 
                {
                    canReach = true;
                    break;
                }
            }
        }
            System.out.println(canReach?"YES":"NO");
        }
    }
}