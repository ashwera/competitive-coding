import java.util.*;

public class kevin3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s = sc.next();
            int n = s.length();
            int firstzero = s.indexOf('0');
            int r2,l2;
            int lengthofzerochain = 0 ;
            if(firstzero==-1)
            {
                r2 = 1;
                l2= 1;
            }
            
            else
            {
                for(int i = firstzero ; i < n;i++)
            {
                char ch = s.charAt(i);
                if(ch == '0')
                {
                    lengthofzerochain++;
                }
                else
                {
                    break;
                }
            }
            l2 = firstzero - Math.min(lengthofzerochain,firstzero);
            //zero keright me kitne element hai? l-i+1
            //add this to l2 for r2
            r2 = l2 +  n - firstzero;
            l2++;            
        }
            int l1 = 1 ;
            int r1 = n;
           
            System.out.println(l1+" "+r1+" "+l2+" "+r2);
        }
        sc.close();
    }
}
