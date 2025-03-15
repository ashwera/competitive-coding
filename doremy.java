import java.util.*;

public class doremy
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            Map<Integer, Integer> count = new HashMap<>(); //works like a dict
            for (int i = 0; i < n; i++)
            {
                ar[i] = sc.nextInt();
                count.put(ar[i], count.getOrDefault(ar[i], 0) + 1);
                // System.out.println(count);
            }
            if(n==2)
            {
                System.out.println("Yes");
                continue;
            }
            List<Integer> check = new ArrayList<>(count.values());//stores occurences  of each number
            if(check.size()==1)
            {
                System.out.println("Yes");
            }
            else if (check.size()==2 && !check.isEmpty())
            {
                if((check.get(0)+1==check.get(1)) ||(check.get(1)+1==check.get(0)) )
                {
                    System.out.println("Yes");
                }
                else if(check.get(0)==check.get(1))
                {
                    System.out.println("Yes");   
                }
                else
                {
                    System.out.println("No");
                }
            }
            else
            {
                System.out.println("No");
            }
            //check for repeated numbers
            //repeated numbers should be max 2 in number and count of one number should be twice of the other one.
        }
        sc.close();
    }
}