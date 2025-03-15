import java.util.*;

public class perm {

    public static void main(String args[])
    {
    Scanner sc = new Scanner(System.in);
    int test = sc.nextInt();
    while(test-->0)
    {
        int n = sc.nextInt();
        List <Integer> arr = new ArrayList<>(n);
        for(int i=0;i<n;i++)
        {
            arr.add(sc.nextInt());
        }
        //cannot be more than half the length
        int answer = 0; //let's take zero for now
        int i=0;
        while(i<n)
        {
            int value = arr.get(i);
            int index2 = arr.indexOf(value+1);
            System.out.println("value "+value);
            System.out.println(arr.indexOf(value+1));
            if((index2-i)>answer && (index2-i)<=n/2)
            {
                answer = index2-i;
                System.out.println(answer);
            }
            i++;
        }
        System.out.println(answer);
    }
    sc.close();
    }
}
