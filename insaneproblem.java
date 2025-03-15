import java.util.*;

public class insaneproblem
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int k = sc.nextInt();
            int l1 = sc.nextInt();
            int r1 = sc.nextInt();
            int l2 = sc.nextInt();
            int r2 = sc.nextInt();
            int ans = 0;
            int maxpower = r2 / l1; 
            int l = 1;
            
            List<Integer> validY = new ArrayList<>();
            int power = k;
            while (power <= r2) 
            {
                validY.add(power);
                power *= k;
            }

            for (int x = l1; x <= r1; x++) 
            {
                for (int y : validY) 
                {
                    if (y >= l2 && y <= r2) {
                        ans++;
                    } 
                    else 
                    {
                        break;
                    }
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}