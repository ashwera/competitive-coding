#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s="";
    cin >> n >> s;
    map<char,int>a,b; //store frequencies 
    for(char ch:s)
    {
        b[ch]++;
    }
    int finalscore = 0; //for simplicity sake.
    for(int i=0;i<n-1;i++)
    {
        //split after 0,1,...n-2
        a[s[i]]++;
        if(b[s[i]]==1)
        {
            b.erase(s[i]);
        }
        else{
            b[s[i]]--;
        }
        int currentscore = size(b)+size(a);
        finalscore = max(currentscore,finalscore);
    }
    cout << finalscore << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}