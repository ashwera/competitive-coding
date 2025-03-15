import java.util.*;

public class div
{
    public static boolean isPrime(int x)
    {
        // double root = Math.pow(x, .5)
        for(int i = 2 ; i < x ; i++)
        {
            if(x%i==0)
            return false;
        }
        return true;
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();    
        while (test-->0)
        {
            List<Integer> b = new ArrayList<>();
            List<Integer> c = new ArrayList<>();
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i = 0 ; i < n; i++)
            {
                arr[i] = sc.nextInt();
                if(isPrime(arr[i]))
                {
                    b.add(arr[i]);
                }
                else
                c.add(arr[i]);
            }
            int bsize = b.size();
            int csize = c.size();
            //if all are composite. 
            if(bsize==0)
            {
                //shift the smallest integer to b 
                int maxofC = Collections.min(c);
                Set<Integer> set = new HashSet<>(c);
                if (set.size() > 1)
                {
                    while(c.contains(maxofC))
                     //if elements of c are different 
                    {                   
                        b.add(maxofC);
                        c.remove(Integer.valueOf(maxofC));
                    }
                }
                else
                {
                    System.out.println(-1);
                    continue;
                }
            }

             //if all are prime. 
            if(csize==0)
            {
                // System.out.println("ryn ths");
                int maxofB = Collections.max(b);
                Set<Integer> set = new HashSet<>(b);
                if (set.size() > 1)
                {
                    while(b.contains(maxofB))
                     //if elements of c are different 
                    {                   
                        c.add(maxofB);
                        b.remove(Integer.valueOf(maxofB));
                    }
                }
                else
                {
                    System.out.println(-1);
                    continue;
                }
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