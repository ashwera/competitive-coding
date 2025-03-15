    import java.util.*;

    public class chaneka
    {
        public static void main(String[] args) 
        {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int min = Integer.MAX_VALUE;
            int[] ar = new int[n];
            for(int i = 0 ; i < n ; i++)
            {
                ar[i] =Math.abs(sc.nextInt());
                if(ar[i] == 0)
                {
                    System.out.println(0);
                    break;
                }
                else if (Math.abs(ar[i])<min)
                min = Math.abs(ar[i]);
            }    
            // Arrays.sort(ar);
            System.out.println(min);
            sc.close();
        }
    }