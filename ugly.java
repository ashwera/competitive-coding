import java.util.*;

public class ugly
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        outer:
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            List<Integer> ar2 = new ArrayList<>();
            for ( int i = 0 ; i < n ; i++ )
            {
                arr[i] = sc.nextInt();
                ar2.add(arr[i]);
            }
            Collections.sort(ar2, Collections.reverseOrder());
           
            for(int i = 0 ; i < n ; i++)
            {
                if(arr[i] == ar2.get(i))
                {
                    System.out.println("No");
                    continue outer;
                }
                else
                break;
            }
            //work on arr bec it is sorted.
            int key = 0; //this place has the same first element. 
            int value = ar2.get(0); 
            for(int i = 1 ; i < n ; i++)
            {
                if(ar2.get(i) != value)
                {
                    break;
                }
                else 
                {
                    key = i;
                }
            }
            if(key>0)
            {                // remove all elements till key and append at the end of the list
                ar2.subList(1, key+1).clear();
                while(key!=0)
                {
                    ar2.add(value);
                    key--;
                }
            }
            System.out.println("Yes");
            for(int i:ar2)
            {
                System.out.print(i+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
