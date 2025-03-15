import java.util.*;

public class daytona
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            List<Integer> num = new ArrayList<>();
            boolean f = false;
            int k = sc.nextInt();
            // Map<Integer,Integer> count = new HashMap<>();
            for (int i = 0 ; i < n ; i++)
            {
                num.add(sc.nextInt());
                if(num.get(i)==k)
                {
                    f = true;
                }
            }
            if(f == true)
            {
                System.out.println("yes");
            }

            // int targetcount = count.getOrDefault(k,0);
            // System.out.println("TC:"+targetcount);

            // boolean exceeds = false;

            // for (Map.Entry<Integer, Integer> entry : count.entrySet()) 
            // {
            //     System.out.println(entry.getKey()+"="+entry.getValue());
            //     if (entry.getValue() > targetcount) 
            //     {
            //     exceeds = true;
            //     break; // Exit the loop early
            //     }
            // }
            // if (exceeds) 
            // {
            //     System.out.println("No");
            // }
            else
                System.out.println("No");
    }
    sc.close();
}
}