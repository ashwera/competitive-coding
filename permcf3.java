import java.util.*;

public class permcf3
{
    public static boolean isnotprime(int n)
    {
        if (n <= 3) return false;  // 0-3 are not4 composite
        for (int i = 2; i <= Math.sqrt(n); i++) 
        {
            if (n % i == 0) return true;  // n is divisible by i, so it's composite
        }
        return false;
    }

    public static void print(int k,int m)
    {
        for(int i = 1; i <= k; i+=2)
        {
            System.out.print(i+" ");
        }
        // System.out.println("M is "+m);
        System.out.print(m+" ");
        for(int i = 2 ; i <=k ; i+=2)
        {
            if(i!=m)
            {
                System.out.print(i+" ");
            }
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int highestodd =  0 ;
            int k = sc.nextInt();
            int highesteven = 0 ; 
            int yay = 0 ;
            if(k<5)
            System.out.println(-1);
            else
            {
                //find breaker
                //start with highest odd value and highest even value
                if(k%2==0)
                {
                    highesteven=k;
                    highestodd=k-1;
                }
                else
                {
                    highesteven=k-1;
                    highestodd=k;
                }
                //find composite pair of highest odd shoudl be an even number
                for(int i=2;i<=highesteven;i+=2)
                {
                    int value = highestodd+i;
                    if(isnotprime(value))
                    { 
                        yay = i;
                        break;
                    }
                }
                print(k,yay);
            }
        }
        sc.close();
    }
}
