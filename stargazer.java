import java.util.*;

public class stargazer
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            long ans = 0 ;
            if(n%2==0&&k%2==0)
            {
                System.out.println(ans);
                continue;
            }
            else if(n%2!=0)
            {
                for(int i = k ; i < (n+1) ;i+=k)
                {
                    ans += i ;
                }
                System.out.println(ans);
                continue;
            }
            else
            {
                //complex
                if(k==1)
                {
                    // System.out.println("here");
                    ans = n *(n+1);
                    System.out.println(ans);
                    ans = ans/2;
                    System.out.println(ans);
                    continue;
                }
                else
                {
                    //find smallest odd number after divisions
                    int number=n/2;
                    int count=1;
                    while(number%2!=0) 
                    {
                        count++;
                        number = number/2;
                    }
                    if(number>=k)
                    {
                        int mid = 1+number;
                        mid/=2;
                        ans = mid;
                        while(count-->0)
                        {
                            ans += ans+number;
                        }
                        System.out.println(ans);
                    }
                    else
                    {
                        System.out.println(0);
                    }
                }
            }
        }
        sc.close();
    }
}
