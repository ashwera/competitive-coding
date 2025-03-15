    import java.math.BigInteger;
    import java.util.*;

    public class uninteresting
    {
        public static void main(String[] args)
        {
            Scanner sc = new Scanner(System.in);
            int test = sc.nextInt();
            while(test-->0)
            {
                BigInteger n = sc.nextBigInteger();
                BigInteger temp  = n ;
                boolean flag = true;
                BigInteger sum = BigInteger.ZERO ; 
                BigInteger nooftwo = BigInteger.ZERO ;
                BigInteger noofthree = BigInteger.ZERO ;
                if(n.compareTo(BigInteger.ZERO)==0)
                {
                    
                }
                else if(n.mod(BigInteger.valueOf(9))==BigInteger.ZERO)
                {

                }
                else{while(temp.compareTo(BigInteger.ZERO) > 0)
                {
                    BigInteger dig = temp.mod(BigInteger.valueOf(10));
                    if(dig.compareTo(BigInteger.valueOf(2))==0)
                    {
                        nooftwo = nooftwo.add(BigInteger.ONE);
                    }
                    else if(dig.compareTo(BigInteger.valueOf(3))==0)
                    {
                        noofthree = noofthree.add(BigInteger.ONE);
                    }
                    sum = sum.add(dig);
                    temp = temp.divide(BigInteger.valueOf(10)) ;
                }
                //counting number of twos and threes and adding all digits to get sum 

                System.out.println("Sum: "+sum);
                BigInteger rem;
                //find the remaining sum needed to meet result 
                BigInteger something = sum.divide(BigInteger.valueOf(9));
                something = something.add(BigInteger.ONE);
                something = something.multiply(BigInteger.valueOf(9));
                System.out.println(something);
                rem = something.subtract(sum);

                System.out.println("Rem: "+rem);
                // System.out.println("No of twos" + nooftwo);
                // System.out.println("No of three: "+noofthree);
                if(rem.compareTo(BigInteger.ONE)==0) //if we need one more
                {
                    //get ten more.
                    //to get ten more, either have 6+2+2
                    //or have 2+2+2+2+2
                    if(nooftwo.compareTo(BigInteger.valueOf(5))>=0 || (noofthree.compareTo(BigInteger.ONE)>=0&&nooftwo.compareTo(BigInteger.TWO)>=0))
                    {

                    }
                    else
                    {
                        flag = false;
                    }
                }
                else if (rem.compareTo(BigInteger.TWO) == 0 && nooftwo.compareTo(BigInteger.ONE) >= 0) 
                {

                } 
                else if(rem.compareTo(BigInteger.valueOf(3)) == 0)
                {
                    //need three. you have 6 as sum. need 12 more
                    // 6+6, 2+2+2+6 , or 6 twos
                    if(nooftwo.compareTo(BigInteger.valueOf(6))>=0 || (noofthree.compareTo(BigInteger.ONE)>=0&&nooftwo.compareTo(BigInteger.valueOf(3))>=0) || noofthree.compareTo(BigInteger.TWO)>=0)
                    {

                    }
                    else
                    {
                        flag=false;
                    }
                }
                else if (rem.compareTo(BigInteger.valueOf(4)) == 0 && nooftwo.compareTo(BigInteger.valueOf(2)) >= 0) 
                {
                    //if you need 4, have 2 twos to get sum 9
                } 

                else if(rem.compareTo(BigInteger.valueOf(5))==0)
                {
                    //if you need 5, you have 4. need 14 more. 
                    //how? either have 7 twos
                    //or two sixes and 1 two
                    //or one six and 4 twos
                    if(nooftwo.compareTo(BigInteger.valueOf(7))>=0 || (noofthree.compareTo(BigInteger.ONE)>=0&&nooftwo.compareTo(BigInteger.valueOf(4))>=0) ||(noofthree.compareTo(BigInteger.TWO))>=0 &&nooftwo.compareTo(BigInteger.ONE)>=0)
                    {

                    }
                    else
                    {
                        flag=false;
                    }
                }

                else if (rem.compareTo(BigInteger.valueOf(6)) == 0) 
                {
                    if (noofthree.compareTo(BigInteger.ONE) >= 0 ||nooftwo.compareTo(BigInteger.valueOf(3)) >= 0) 
                    {
                        //for six, have one three or have 3 twos. 
                        //if you have two threes,then it works
                    }
                    else
                    {
                        flag=false;
                    }
                } 
                //if you need 7, you have 2. need 16 more 

                else if(rem.compareTo(BigInteger.valueOf(7))==0)
                {
                    if(nooftwo.compareTo(BigInteger.valueOf(8))>=0 || (noofthree.compareTo(BigInteger.TWO)>=0 && nooftwo.compareTo(BigInteger.TWO)>=0) || (noofthree.compareTo(BigInteger.ONE)>=0 && nooftwo.compareTo(BigInteger.valueOf(5))>=0))
                    {

                    }
                    else
                    {
                        flag = false;
                    }
                }

                else if (rem.compareTo(BigInteger.valueOf(8)) == 0) 
                {
                    if (noofthree.compareTo(BigInteger.ONE) >= 0 && nooftwo.compareTo(BigInteger.ONE) >= 0) 
                    {
                        //for eight, have 1 three and 1 two
                    }
                    else if (nooftwo.compareTo(BigInteger.valueOf(4)) >= 0) {
                            //or have four twos. 
                    }
                    else
                    {
                        flag = false;
                    }
                }
                
                else
                {
                    flag = false;
                }
            }
                if(flag)
                System.out.println("Yes");
                else
                System.out.println("No");
            }
            sc.close();
        }
    }