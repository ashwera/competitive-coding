import java.util.*;
public class linetrip
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        int test = sc.nextInt();
        List<Integer> answer = new ArrayList<>();
        while (test-->0)
        {
            int n = sc.nextInt();
            // int y = 0 ;//assume this is the current oil in car.
            int x = sc.nextInt();
            int maxdifference = 0;
            int[] fuel = new int[n+1];
            fuel[0] = 0;
            for (int i = 1; i <= n; i++)
            {
                fuel[i] = sc.nextInt();
                maxdifference =  Math.max(maxdifference, fuel[i] - fuel[i - 1]);
            }
            // fuel[n-1] is the last gasstation
            int temp = Math.abs(fuel[n]-x);
            temp = temp*2;
            //this station minus destination x times two is max distance
            maxdifference = Math.max(maxdifference , temp);
            answer.add(maxdifference);
        }
        for (int x : answer) {
            System.out.println(x);
        }
        sc.close();
    }
}