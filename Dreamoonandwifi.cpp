#include <bits/stdc++.h>
using namespace std;
#define int long long

long double permutationformula(int n,int r)
{
    if(r>n) return 0;
    long double res = 1;
    for(int i=1;i<=r;i++)
    {
        res*=(n-i+1);
        res/=i;
    }
    return res;
}
void solve() {
    string s , t;
    int sum=0;
    cin >> s >> t;
    int n = s.length();
    //consistent
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+') sum++;
        else sum--;
    }

    //you have the sum
    int rawsum=0;
    int qmcount=0; //counts ?
    for(int i=0;i<n;i++)
    {
        if(t[i]=='+') rawsum++;
        else if(t[i]=='-')rawsum--;
        else qmcount++;
    }
    //the difference in sum is what we need. 
    int difference = sum - rawsum; 
    int exceedant = abs(difference); //number of plus/minuses apart frmo pairs 
    //total possibilities of remaining indices = 2^qm count
    //total desirable= permutation fx
    
        //blanks also need to be even.
        // for example, 4 blanks can make 4,2,0,-2,-4 only
        if((qmcount%2 != exceedant%2) || qmcount < exceedant) //odd or impossible 
        {
            cout << 0 << endl;
        }
        else
        {
            int pairs = (qmcount - exceedant)/2;
            exceedant+=pairs;
            // int recessant = pairs; 
            //let + be our exceeding element in all. difference is positive. for simplicity. 
            long double totalpossibilities = pow(2.0, qmcount);
            long double desiredpossibilities = permutationformula(qmcount,exceedant);
            long double result = (long double)desiredpossibilities / totalpossibilities;
            cout << fixed << setprecision(12) << result << endl;
        }
    
}
signed main() {
    int t;
    t=1;
    while (t-- > 0) {
        solve(); 
    }
}