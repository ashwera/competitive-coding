import java.util.*;

public class startup
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt(); //no of shelves
            int k = sc.nextInt(); //no of botttles
            // int[] c = new int[k];
            List<Integer> costs = new ArrayList<>();  // to store total costs for each unique brand
            List<Integer> b = new ArrayList<>();  // stores unique brands   
            int uniqueIndex = 0;
            Map<Integer, Integer> costMap = new HashMap<>(); // to store total costs for each unique brand

            for (int i = 0; i < k; i++) 
            {
                int brand = sc.nextInt();
                int cost = sc.nextInt();
                costMap.put(brand, costMap.getOrDefault(brand, 0) + cost);
            }
            PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
            for (int cost : costMap.values()) 
            {
                maxHeap.offer(cost);
            }
            int sum =0;
            for (int i = 0; i < n && !maxHeap.isEmpty(); i++) {
                sum += maxHeap.poll(); // Get the highest cost
            }
            System.out.println(sum);
        }
        sc.close();
    }
}
