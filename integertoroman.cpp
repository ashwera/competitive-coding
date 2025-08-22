#include <string>
#include <vector>  
using namespace std;

class Solution {
public:
    string intToRoman(int nums) {
        //convert to place value format. 
        int ones = nums%10;
        int tens = nums%100;
        tens/=10; 
        int hundreds = nums%1000;
        hundreds/=100;
        int thousands = nums%10000;
        thousands/=1000; 
        string s="";
        while(thousands-->0)
        {
            s = s + 'M';
        }
        if(hundreds==9)
        {
            s = s +'C'+'M';
        }
        else if(hundreds>=5&&hundreds<9)
        {
            s = s +'D';
            hundreds-=5;
            while(hundreds-->0)
            {
                s = s + 'C';
            }
        }
        else if(hundreds==4)
        {
            s = s +'C'+'D';
        }
        else if(hundreds<=3)
        {
            while(hundreds-->0)
            {
                s = s + 'C';
            }
        }

        //TENS
        if(tens==9)
        {
            s = s +'X'+'C';
        }
        else if(tens>=5&&tens<9)
        {
            s = s +'L';
            tens-=5;
            while(tens-->0)
            {
                s = s + 'X';
            }
        }
        else if(tens==4)
        {
            s = s +'X'+'L';
        }
        else if(tens<=3)
        {
            while(tens-->0)
            {
                s = s + 'X';
            }
        }

        //ONES
        if(ones==9)
        {
            s = s +'I'+'X';
        }
        else if(ones>=5&&ones<9)
        {
            s = s +'V';
            ones-=5;
            while(ones-->0)
            {
                s = s + 'I';
            }
        }
        else if(ones==4)
        {
            s = s +'I'+'V';
        }
        else if(ones<=3)
        {
            while(ones-->0)
            {
                s = s + 'I';
            }
        }
        return s;
    }
};