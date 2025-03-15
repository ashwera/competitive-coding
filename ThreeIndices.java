import java.util.*;

public class ThreeIndices
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            List arr = new ArrayList<>();
            int element = n ; 
            int peak2 = 0 ;
            boolean flag = false;
            for(int i=0;i<n;i++)
            {
                arr.add(sc.nextInt());
            }
            List dupe = new ArrayList<>(arr);
            peak2 = arr.indexOf(element);
            while(element!=0)
                {                    
            //         System.out.println("Element"+element);
            // System.out.println("Peak "+peak2);
                    if(peak2==0||peak2==arr.size()-1) //when max is in the corners.
                    {   
                        arr.remove(peak2);
                        peak2 = arr.indexOf(--element);
                    }
                    else
                    {
                        System.out.println("YES");
                        peak2 = dupe.indexOf(element);
                        System.out.println((peak2)+" "+(peak2+1)+" "+(peak2+2)); //make it 1indexed
                        flag = true;
                        break;
                    }
                }
                if(!flag)
                {
                    System.out.println("NO");
                }
            
        }
        sc.close();
    }
}