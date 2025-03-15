import java.util.*;

public class chem
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            String s = sc.next();
            String[] string = s.split("");
            //count occurences of all similar characters
            int[] count = new int[26];
            for(int i = 0; i < string.length; i++)
            {
                count[string[i].charAt(0) - 'a']++;
            } 
            //if k is more than or equal to individual elements, it's ok
            //if length after removing k is one, its ok
            int ind = 0 ;
            //if k is odd and there is one individual, it's palindromable
            for(int i = 0 ; i  < 26 ; i++)
            {
                if(count[i] % 2 != 0)
                ind++;
                //rest all are in pairs alr.
            }
            if(k>=(ind-1) || n-k==1)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
        sc.close();
    }
}
