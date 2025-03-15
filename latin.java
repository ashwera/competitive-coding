import java.util.*;
public class latin
{
    public static boolean canFormSubstring(String x, String s) 
    {
        Set<Character> setofx = new HashSet<>();
        for (char c : x.toCharArray()) {
            setofx.add(c);
        }

        for (char c : s.toCharArray()) {
            if (!setofx.contains(c)) 
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        outer:
        while(test-->0)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            String x = sc.next().trim();
            String s = sc.next().trim();

            if (!canFormSubstring(x.toLowerCase(), s.toLowerCase())) {
                System.out.println(-1);
                continue;
            }
            //three cases, 1. all same letters. 2. will get by counting iterations. 3. hardwork
            if(x.contains(s))
            {
                System.out.println(0);
                continue;
            }
            
            int i = 1;
            while (i <= m && x.length() <= 10_000) 
            {   x = x+x;
                // System.out.println(x);
                if(x.contains(s))
                {
                    System.out.println(i);
                    continue outer;
                }
                i++;
            }
            System.out.println(-1);
        }
        sc.close();
    }
}