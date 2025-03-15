import java.util.*;
import java.lang.*;
import java.io.*;

class Solution
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int k = sc.nextInt();
            int perimeter = 2*(n+m);
            while(perimeter>k)
            {
                if(n>0)
                n--;
                else
                m--;
                perimeter = 2*(n+m);
                System.out.println(perimeter);
            }
            System.out.println(k-perimeter);
        }
        sc.close();
	}
}
