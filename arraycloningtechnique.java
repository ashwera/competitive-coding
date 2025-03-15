import java.util.*;

public class arraycloningtechnique
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int n = sc.nextInt();
            int size = n ; 
            int[] ar = new int[n];
            int count = 0 ;
            int maxFreq = 0; //this is the frequency of the number that comes most often
            HashMap <Integer,Integer> frequency = new HashMap<>();
            for(int i = 0 ; i < n ; i++)
            {
                ar[i] = sc.nextInt();
                //get majority
                int freq = frequency.getOrDefault(ar[i],0)+1; //this gets the frequency of the integer.
                frequency.put(ar[i], freq);//this puts the frequency value pair in the map
                if(freq>maxFreq)
                {
                    maxFreq = freq;
                }
            }
            if(maxFreq==n)
            {
                //only one element throughout
                count = 0 ;
            }
            //number of swaps :  n-maxfreq
            //number of clones needed: size - n*x where x is iterable and n is maxfreq
            else
            {
                int blanks = size - maxFreq;
                // count = (int) Math.ceil((Math.log(size-maxFreq) / Math.log(2)));
                // count++;
                // count+=size-maxFreq;
                // int x = 1;
                n = n-maxFreq; //n /becomes number of blanks
                while(true)
                {
                    n = n - maxFreq;
                    count++;
                    // System.out.println("N is "+n);
                    
                    if(n>0) {
                        maxFreq*=2;
                        // count++;
                        }
                    else break;
                }
                // System.out.println(count);
                count = count + (blanks);
            }
            System.out.println(count);
        }
        sc.close();
    }
}
