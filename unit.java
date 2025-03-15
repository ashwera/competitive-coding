import java.util.*;

public class unit{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] ar = new int[n];
            int countneg=0;
            int countpos=0;
            for (int i = 0; i < n; i++) 
            {
                ar[i] = sc.nextInt();
                //even number of -1s should be there and -1 should be less than or equal to 1
                if(ar[i]>0)
                countpos++;
                else
                countneg++;
            }

            if(countneg<=countpos)
            {
                if(countneg%2==0)
                System.out.println(0);
                else
                System.out.println(1);
            }

            else if (countneg>countpos)
            {
                if(countneg%2==0)
                {
                    int i = 0;
                    while(countneg>countpos)  //check to see if it's still more than countpos, make less by 2 
                    {
                        countneg-=2;
                        countpos+=2;
                        i+=2;
                    }      
                    System.out.println(i);
                }

                else //odd hai, make even 
                {   
                    int i = 1;
                    countneg--;
                    countpos++; //made countneg even
                    while(countneg>countpos)  //check to see if it's still more than countpos, make less by 2 
                    {
                        countneg-=2;
                        countpos+=2;
                        i+=2;
                    }
                    System.out.println(i);
                }
            }
        }
        sc.close();
    }
}