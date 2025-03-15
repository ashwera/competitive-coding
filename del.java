import java.util.*;

public class del
{
        public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        outer:
        while(test-->0)
        {
            String s = sc.next().toUpperCase();
            String t = sc.next().toUpperCase();
            int sl = s.length();
            int tl = t.length();
            int[] charfreqins = new int[26];
            int[] charfreqint = new int[26];
            if(s.equals(t))
            System.out.println("Yes");
            else
            {
                for(int i = 0 ; i < sl; i++)
                {
                    char ch = s.charAt(i);
                    charfreqins[ch-65]++;
                }
                for(int i = 0 ; i < tl ; i++)
                {
                    char ch = t.charAt(i);
                    charfreqint[ch-65]++;
                }
                //get frequency
                int s1=tl;

                while(s1>0)   //alter frequencies and string s 
                {
                    //match last chars
                    char req = t.charAt(s1-1); //last char'
                    // System.out.print(req);
                    // req-=65;
                    // int diff = charfreqins[req] - charfreqint[req]; //if this is zero, the alphabet is sorted.
                    //itne alphabet extra hain in s.
                    //find last all element ka index and remove it from s
                    while(charfreqins[req-65]!=charfreqint[req-65])
                    {
                        int q = s.indexOf(req);
                        if(q==-1)
                        {
                            System.out.println("No");
                            continue outer; 
                        }
                        s = s.substring(0,q)+s.substring(q+1);
                        charfreqins[req-65]--;
                    }
                    s1--;
                }

                //now do the shit 
                for(int i = tl-1;i>=0;i--)
                {
                    char ch = t.charAt(i);
                    int last = s.lastIndexOf(ch);
                    if(last==-1)
                    {
                        System.out.println("No");
                        continue outer;
                    }
                    else
                    {
                        s = s.substring(0,last);
                    }
                }
                System.out.println("yes");
            }       
        }
        sc.close();
    }
}
