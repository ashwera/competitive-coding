import java.util.*;

public class bs
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int length = 0 ;
            int temp = 0 ;
            int n = sc.nextInt();
            int[] bin = new int[n];
            for(int i=0;i<n;i++)
            {
                bin[i] = sc.nextInt();
                if(bin[i]==0)
                {
                    temp++;
                    if(temp>length)
                    length = temp;
                }
                else
                {
                    temp = 0 ;
                }
            }
            System.out.println(length);
        }
        sc.close();
    }
}
