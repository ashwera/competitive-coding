import java.util.*;

public class insane
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int k = sc.nextInt();
            int l1 = sc.nextInt();
            int r1 = sc.nextInt();
            int l2 = sc.nextInt();
            int r2 = sc.nextInt();
            int ans = 0;
            int max = r2/l1; //isse chote hi hone hain sab ab
            
            int l = k; 
            while(l<max)
            {
                l*=k;
            }

            l/=k;
            //itna l ja sakta hai. 
            for(int i = l1 ; i <= r1 ; i++ )
            {
                for(int j = l2 ; j <= r2 ; j++)
                {
                    if (i==j)
                    {
                        ans++;
                    }
                    else if(j%i==0) //valid hai 
                    {
                        int value = j/i;
                        // System.out.println(i+" "+j+" "+value);
                        if(value <= l && value % k == 0)
                        {
                            // System.out.println(i+" "+j+"= "+value);
                            ans++;
                        }
                    }
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}