import java.util.*;

public class mex
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int lastzeroindex = -1;
            boolean onlyzeroes = true;
            boolean iszeroinmiddle = false;
            int multiplechain = 0;
            boolean newchain = true;
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();

                if(arr[i]==0)
                {
                    newchain = true;
                    lastzeroindex=i;
                }
                else
                {
                    onlyzeroes = false;
                    if(newchain)
                    {
                        multiplechain++;
                        newchain = false;
                    }
                }

                if(i>0&&i<n-1)
                {
                    if(arr[i]==0)
                    iszeroinmiddle = true;
                }
            }
            int firstzeroindex = -1;
            int maxcount=0;
            for(int i = 0 ; i < n ; i ++ )
            {
                if(arr[i]==0)
                {
                    firstzeroindex = i;
                    break;
                }
                //     if(firstzeroindex==-1)
                //     {
                //         firstzeroindex = i;
                //     }
                //     count=0;
                // }
                // else
                // {
                //     count++;
                //     maxcount = Math.max(maxcount,count);
                // }
            }
            // System.out.println(multiplechain);
            if(onlyzeroes)
            {
                System.out.println(0);
            }

            else if (firstzeroindex==-1) //no zeroes
            {
                System.out.println(1);
            }

            else if(multiplechain==1)
            {
                System.out.println(1);
            }
            else if (arr[0]==0&&arr[n-1]==0&&!iszeroinmiddle)
            {
                System.out.println(1);
            }

            else if(firstzeroindex==lastzeroindex) //there's only one zero
            {
                if(firstzeroindex==0||firstzeroindex==n-1) //is it on the extremes?
                {
                    System.out.println(1);
                }
                else
                {                    //its in the middle
                    System.out.println(2);
                }
            }
            else if(iszeroinmiddle)
            {
                System.out.println(2);
            }
            else
            System.out.println(1);
            // else
            // {
            //     //there are multiple zeroes.
            //     System.out.println(2);
            // }
        }
        sc.close();
    }
}