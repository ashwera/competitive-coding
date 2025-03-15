import java.util.*;

public class trying
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            String s = sc.next();
            int[] freq = new int[27];
            for(int i = 0 ; i < n ; i ++)
            {
                char ch = s.charAt(i);
                int charvalue = ch-65;
                freq[charvalue]++;
            }
            int max = 0 ; 
            for(int i = 0 ; i < 27;i++)
            {
                if(freq[i]>max)
                {
                    max = i;
                }
            }
        }
        sc.close();
    }
}