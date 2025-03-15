public class gcd{
    public static void main()
    {
        int x = 3;
        int y = 3;
        if(x==y)
        System.out.println(0); //if numbers are the same, the gcd is the number itself.   
        int min,max=0;
        if(x>y)
        {
            max=x;
            min=y;
        }
        else
        {
            max = y;
            min = x;
        }
        int hcf = 1;
        for(int i = 2;i<=min;i++)
        {
            if(max%i==0 && min%i==0)
            {
                hcf = i;
            }
            if(i>2)
            {
                System.out.println(0);
                System.exit(0);;
            }
        }
        System.out.println(hcf);
    }
}