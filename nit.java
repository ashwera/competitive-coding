    import java.util.*;

    public class nit
    {
        public static void main(String[] args)
        {
            Scanner sc = new Scanner(System.in);
            int test = sc.nextInt();
            while(test-->0)
            {
                int n = sc.nextInt();
                int count = 0;
                boolean found = false; //found a new zero stream
                int[] ar = new int[n];
                boolean terminate = false;
                //find number of non zero streams. 
                for(int i = 0 ; i < n ; i++)
                {
                    ar[i] = sc.nextInt();
                    if(ar[i]!=0&&!found) 
                    {
                        found = true; 
                        count++;
                    }
                    else if (ar[i]==0)
                    {
                        found = false;
                    }
                }
                if(count>=2)
                System.out.println(2);
                else
                System.out.println(count);
            }
            sc.close();
        }
    }
