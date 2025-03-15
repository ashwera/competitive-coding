import java.util.*;
public class cover
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        List<Integer> answer = new ArrayList<>();
        int test = sc.nextInt();
        outer:
        while(test-- > 0)
        {
            int n = sc.nextInt();
            String s = sc.next();
            int dotcount = 0;
            // . if empty and # if blocked
            //Pseudocode
            //if therea are 0 dots, return 0
            // if there are 3 continuous, then count it as two, stop there nevertheless. 
            // if none are 3 continuous, count separately.
            for ( int i = 0 ; i < n ; i++)
            {
                //checking for continuous 3 dots
                if (s.charAt(i) == '.')
                {
                    dotcount++;
                    // System.out.println("Added dotcount");
                    if(i<n-2)
                    {
                        if(s.charAt(i+1) == '.' && s.charAt(i+1) == s.charAt(i+2))
                        {
                            // System.out.println("Entered 3 dot arena");
                            answer.add(2);
                            dotcount = 0 ;
                            continue outer;
                        }
                    }
                }
            }
            answer.add(dotcount);
        }
        
        for (int ans : answer) 
        {
           System.out.println(ans);    
        }
        sc.close();
        }
    }