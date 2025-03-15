import java.util.*;

public class extremelyround
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int t = n;
            int dig = 0;
            
            //n is divided by 10^number of digits-1 in n. 
            while(t!=0)
            {
                t/=10;
                dig++;
            }
            int output = (9*(dig-1)) + (int)(n/Math.pow(10,dig-1));
            System.out.println(output);
            //for 0 to 9, ans is n/1
            //for 10 to 99, ans is n/10 + 9
            //for 100 to 999, ans is n/100 + 9 + 9 and so on. 
            //add 9 digit-1 number of times, then add n/10^digit
        }
        sc.close();
    }
}
