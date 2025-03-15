import java.util.*;

public class newdiv
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            int n = s.length();
            int temp = 0 ;
            outer:
            for(int i = n-1 ; i>0 ; i--)
            {
                int ch = s.charAt(i)-'0';
                System.out.println(ch);
                if(ch==5||ch==0)
                {
                    for(int j = i-1 ; j >=0 ; j--)
                    { 
                        int ch2 = s.charAt(j)-'0';
                        int total = (ch2*10)+ch;
                        System.out.println(total);
                        if(total%25==0 && total>24)
                        {
                            break outer;
                        }
                        else
                        {
                            temp++;
                        }
                    }  
                }
                else
                {
                    temp++;
                }
            }
            System.out.println(temp);
        }
    }
}