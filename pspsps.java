import java.util.*;

public class pspsps
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            String s = sc.next();
            int pcounts=0,scounts=0,dcounts=0;
            int sindex=s.indexOf('s');
            int dindex = s.indexOf('.');
            int lastindex = s.lastIndexOf('s');
            boolean verdict = true;
            for(int i = 0 ; i < n ; i ++)
            {
                if(s.charAt(i)=='p')
                pcounts++;
                else if (s.charAt(i)=='s')
                scounts++;
                else
                dcounts++;
            }
            
            // System.out.println(t);
            if(scounts>0) //either beginning can be dots or ending. not both. 
            {
                String t = s.substring(0,sindex); //string before s 
                String u = s.substring(lastindex,n);
                if(t.contains(".")&&u.contains("."))
                {
                    verdict=false;
                }
            }
            
            if(sindex!=-1)
            {
                if(s.charAt(0)=='p')
                {verdict=false;}
                else{
                for(int i = sindex+1 ; i < lastindex-1; i ++)
                {
                    if(s.charAt(i)=='p')
                    {
                        verdict=false;
                        break;
                    }
                }}
            } 

            if(verdict)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
        sc.close();
    }
}