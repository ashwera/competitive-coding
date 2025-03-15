import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class div2
{
    public static boolean issame(int[] ar)
    {
        int n = ar.length;
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(ar[i]!=ar[i+1])
            return false;
        }
        return true;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt(); //size of array
            int[] array = new int[n];
            List<Integer> b = new ArrayList<>();
            List<Integer> c = new ArrayList<>();
            int max = 0 ;
            for(int i = 0 ; i < n ; i++)
            {
                array[i] = sc.nextInt();
                b.add(array[i]);
                if(array[i]>max)
                max = array[i];
            }
            if(issame(array))
            {
                System.out.println(-1);
                continue;
            }
            while(b.contains(max))
            //if elements of c are different 
            {
                c.add(max);
                b.remove(Integer.valueOf(max));
            }
            System.out.println(b.size()+" "+c.size());
            for(int i = 0 ; i < b.size() ; i++)
            {
                System.out.print(b.get(i)+" ");
            }
            System.out.println();
            for(int i = 0 ; i < c.size() ; i++)
            {
                System.out.print(c.get(i)+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}