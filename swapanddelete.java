import java.util.*;

public class swapanddelete
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            int n = s.length();
            int z = 0;
            int o = 0 ;
            int count = 0 ;
            for(int i = 0 ; i < n; i++ )
            {
                char ch = s.charAt(i);
                if(ch == '0')
                {
                    z++;
                }
                else 
                {
                    o++;
                }
            }
            if(n==1)
            {
                count=1;
            }
            else{for(int i = 0 ; i < n; i++ )
            {
                char ch = s.charAt(i);
                if(ch == '0')
                {
                    o--;
                }
                else 
                {
                    z--;
                }
                if(z<0||o<0)
                {
                    count = o+z+1;
                    break;
                }
            }}
            System.out.println(count);
        }
        sc.close();
    }
}