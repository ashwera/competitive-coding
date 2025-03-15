import java.util.*;

public class n
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            List <Integer> arr = new ArrayList<>(n);
            int[] result = new int[n];
            
            for(int i:result)
            {
                i=0;
            }

            int a = 0 ;

            for(int i=0;i<n;i++)
            {
                arr.add(sc.nextInt()%k);
                if(arr.get(i)==0)
                {
                    arr.set(i, k);
                }
                // System.out.println(arr);
            }
            
            int p = k;
            // System.out.println(arr);
            Map<Integer, Integer> map = new HashMap<>();
for (int i = 0; i < n; i++) {
    map.put(arr.get(i), i);
}

            while(a<n)
            {
                int index = map.getOrDefault(p, -1); // -1 if p is not found
                // " is "+index );
                if(index==-1)
                {
                   p--;
                }
                else
                {
                    map.put(index, -1);
                    result[a] = index+1;
                    // System.out.print(result[a]+" ");
                    a++;
                }
            }

            for(int i:result)
            {
                System.out.print(i+" ");
            }
            System.out.println();
            //dealt with k now. you added all first deaths. now deal with k-1, k-2 and so on mods. 
            //crazy
            //for all k-a, add orderwise.
            //same till k-a = 0
        }
        sc.close();
    }
}