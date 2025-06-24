#include <bits/stdc++.h>
using namespace std;
#define int long long

void print(map<char,int>freq)
{
    for(auto it:freq)
    {
        cout << it.first << " " << it.second << endl;
    }
}
bool isValid(string s) {
        // count frequency of each type of bracket and reduce by one if met by closing
        //if frequency=0, ya else no
        int n = s.length();
        int a;
        map<char,int>freq;
        for(int i=0;i<n;i++)
        {
            //one ([)] 
            // insider brackets are closed first   
            //find a pair, replace by ""
            if(s[i]=='['&&s[i+1]==']')
            {
                s.erase(i, 2);
                i-=2;
            }
            else if(s[i]=='{'&&s[i+1]=='}')
            {
                s.erase(i, 2);
                i-=2;
            }
            else if(s[i]=='('&&s[i+1]==')')
            {
                s.erase(i, 2);
                i-=2;
            }
        }
        return s.empty();
    }

signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        string s;
        cin >> s;
        cout << isValid(s) << endl; 
    }
}