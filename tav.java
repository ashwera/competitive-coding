import java.util.*;

public class tav
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();    
        while (test-->0)
        {
            List <Integer> answer = new ArrayList<>();
            int n = sc.nextInt();
            int[] array = new int[n];
            array[0] = sc.nextInt();
            answer.add(array[0]);
            for (int i = 1; i < n; i++) 
            {
                array[i] = sc.nextInt();
                //agar ascending order break hua toh hi add something smaller than rhs
                if(array[i-1]>array[i]) //order break
                {
                    if(array[i]!=1)
                    answer.add(array[i]-1);
                    else
                    answer.add(1);
                }
                answer.add(array[i]);
            }
            System.out.println(answer.size());
            for(int ans : answer)
            System.out.print(ans+" ");

            System.out.println();
        }
        sc.close();
    }
}