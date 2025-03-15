import java.util.*;

public class easyproblem
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            System.out.println(n-1);
        }
        sc.close();
    }
}