import java.util.*;

public class raspberry
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] arr = new int[n];
            // long prod=1;
            int answer = 100; 
            boolean flag = false;
            int addone = 0 ;
            int valid=0;
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
                if(arr[i]%k==0)
                {
                    flag = true;
                }
                if(k==4)
                {
                    if(arr[i]%4==2)
                    {
                        valid++;
                    }
                    else if(arr[i]%4==3)
                    {
                        answer=1;
                    }
                    else
                    {
                        addone++;
                    }
                }
                else if (k==3||k==5)
                {
                    answer = Math.min(answer, k - (arr[i]%k));
                }
             }
            

            if(flag)
            {
                answer=0;
            }
            else
            {
                if(k==2)
                {
                    answer = 1;
                }
                else
                {
                    if(valid>=2)
                    answer = 0;
                    else if(valid==1&&addone>0)
                    {
                        answer = Math.min(answer,1);
                    }
                    else if(valid==0&&addone>1)
                    {
                        answer = Math.min(answer,2);
                    }
                }
            }
            System.out.println(answer);
        }
        sc.close();
    }
}
