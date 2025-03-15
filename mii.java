import java.util.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) 
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            for (int i = 0 ; i < n ; i++ )
            {
                ar[i] = sc.nextInt();
            }
            boolean changed = false;
            int waqt = 0;
            while(!changed)
            {
                for (int i = n-1 ; i > 0 ; i-- )
            {
                if(ar[i]>ar[i-1])
                {
                    ar[i] = ar[i-1];
                    changed = true;
                }
            }
            if(changed)
            {
                changed = false;
                waqt++;
            }
        }
        System.out.println(waqt);
        }
        sc.close();
    }
}