import java.util.*;
// redo later
public class mainak
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        //rotate about smallest then largest then get diff
        while(test-->0)
        {
            int diff = 0 ;
            int diff2 = 0;
            int diff3 = 0 ; 
            int max  = 0 ;
            int min = Integer.MAX_VALUE;
           int n = sc.nextInt();
           int a[] = new int[n];
           int maxin=-1;
           int minin=-1;
           a[0] = sc.nextInt();
           for(int i = 1 ; i < n ; i++)
           {
                a[i] = sc.nextInt();
                diff3 = Math.max(diff3, a[i-1]-a[i]);
           }
           for(int i = 0 ; i < n ; i++)
           {
            if(a[i]>max)
            {
                max = a[i];
                maxin = i;
            }
            if(a[i]<=min)
            {
                min = a[i];
                if(i>minin)
                minin = i;
            }
           }
        //    System.out.println("Max value "+max);
        //    System.out.println("Min value: "+min);
        if(minin-maxin==1)
        System.out.println(max-min);
        else if(n<2)
           System.out.println(0);
        else
           {
            diff = max - a[0];
           diff2 = a[n-1] - min;
           if(diff>=diff2&&diff>=diff3)
           System.out.println(diff);
           else if (diff2>=diff&&diff2>=diff3)
           System.out.println(diff2);
           else if(diff3>=diff2&&diff3>=diff)
           System.out.println(diff3);
           else
           System.out.println(0);
           }
        }
        sc.close();
    }
}
