import java.util.*;

public class intint
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int k = sc.nextInt();
            int ar[] = new int[k];
            int value = k-2; //iske divisors dhoondo
            HashMap<Integer,Integer> map = new HashMap<>();
            for(int i=0;i<k;i++)
            {
                ar[i] = sc.nextInt();
                if(value%ar[i]==0)
                map.put(ar[i], map.getOrDefault(ar[i], 0) + 1);
            }
            for(int j:map.keySet())
            {
                int secondvalue = value/j;  //potential divisor pair
                if(map.containsKey(secondvalue)&&(map.get(secondvalue)>1||secondvalue!=j))
                {
                    System.out.println(secondvalue+" "+j);
                    break;
                }
            }
        }
        sc.close();
    }
}
