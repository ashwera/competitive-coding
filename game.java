import java.util.*;
public class game
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        List<String> answer = new ArrayList<>();
        int test = sc.nextInt();
        while(test-- > 0)
        {
            int n = sc.nextInt();
            if((n+1)%3==0 || (n-1)%3==0)
            {
                answer.add("First");
            }
            else
            answer.add("Second");
        }
        for (String s : answer)
        {
            System.out.println(s);
        }
        sc.close();
    }
}