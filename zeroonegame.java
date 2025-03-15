import java.util.*;

public class zeroonegame
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            int n = s.length();
            boolean alicewin = false;
            int counter = 0 ; 
            for(int i = 0; i < n-1 ;i++)
            {
                char ch = s.charAt(i);
                char ch2 = s.charAt(i+1);
                if(ch!=ch2)
                {
                    s = s.substring(0, i) + s.substring(i + 2);
                    // System.out.println(s);
                    counter++;
                    i = Math.max(-1, i - 2); // Step back to check previous pair safely
                    n = s.length(); 
                    if(counter%2!=0)
                    {
                        alicewin = true;
                    }
                    else
                    {
                        alicewin = false;
                    }
                }
                if(s.length()<2)
                {
                    break;
                }
            }
            if(alicewin)
            System.out.println("DA");
            else
            System.out.println("NET");
        }
        sc.close();
    }
}