import java.util.*;

public class kinich
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int a[] = new int[n];
            Set<Integer> set = new HashSet<>();
            for(int i=0;i<n;i++)
            {
                a[i] = sc.nextInt();
                set.add(a[i]); //add unique values
            }
            //iteratre through each set value and see number of occurences. whatever it be, floor divide by 2
            int count = 0;
            for(int i:set)
            {
                int temp = 0 ;
                for(int j = 0 ; j < n ; j++) 
                {
                    if(i==a[j])
                    temp++;
                }
                count += temp/2 ;
            }
            System.out.println(count);
        }
        sc.close();
    }
}
