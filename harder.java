import java.util.*;

public class harder
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int[] b = new int[n];
            Map<Integer, Boolean> visited = new HashMap<>();
            // int counter = 0 ; 
            // List<Integer> list = new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();

                if (visited.containsKey(arr[i])) 
                {
                    b[i] = 0 ; 
                    // counter++;
                } 
                else 
                {
                    visited.put(arr[i], true);
                    b[i] = arr[i];
                }
            }

            Set<Integer> presentInB = new HashSet<>();
            for (int i : b) 
            {
                if (i != 0) presentInB.add(i);
            }

            int missingValue = 1;
            for (int i = 0; i < n; i++) 
            {
                if (b[i] == 0) 
                {
                    while (presentInB.contains(missingValue)) 
                    {
                        missingValue++;
                    }
                    b[i] = missingValue++;
                }
            }

            for(int i:b)
            {
                System.out.print(i+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}