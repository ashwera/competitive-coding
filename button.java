import java.util.*;

public class button
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int ana = sc.nextInt();
            int katie = sc.nextInt();
            int both = sc.nextInt();
            // if(ana > (katie+both))
            // System.out.println("First");
            // else if (katie> (ana+both))
            // System.out.println("Second");
            // else
            // {
                both = both%2; //if its 1, then ana will hit it last, if its 0,  then katie will hit it last
                //at 1, ana can hit ana+1 times more. if 0, katie can hit katie+1 times more. 
                if(both == 0)
                {
                    if(ana>katie)
                    System.out.println("First");
                    else
                    System.out.println("Second");
                }
                else 
                {
                    if(katie>ana)
                    System.out.println("Second");
                    else
                    System.out.println("First");
                }
            }
            sc.close();
        }
}