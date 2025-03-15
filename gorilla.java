import java.util.*;

public class gorilla
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            Hashmap <Integer,Integer> arr = new Hashmap<>();
            for( int i = 0 ; i < n ; i++ )
            {
                int temp = sc.nextInt();
                arr.put(temp, arr.getOrDefault(temp, 0) + 1); 
            }
            arr.sort
        }
        sc.close();
    }
}
