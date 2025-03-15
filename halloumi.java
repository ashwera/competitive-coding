    import java.util.*;
    public class halloumi
    {
        public static boolean isSorted(int[] box)
        {
            int n = box.length;
            for (int i = 0; i < n - 1; i++)
            {
                if(box[i]>box[i+1])
                return false;
            }
            return true;
        }
       public static void main(String args[])
       {
            List<String> answer = new ArrayList<>();
            Scanner sc = new Scanner(System.in);
            int test = sc.nextInt();
            while (test-- > 0) {
                int n = sc.nextInt();
                int k = sc.nextInt();
                int[] box = new int[n];
                for (int i = 0 ; i < n ; i++)
                {
                    box[i] = sc.nextInt();
                }
                if (k>1)
                {
                    answer.add("Yes");
                }
                else if(k==1&&isSorted(box))
                {
                    answer.add("Yes");
                }
                else
                answer.add("No");
            }
            for (String s : answer) {
            System.out.println(s);
            }
            sc.close();
       }
}