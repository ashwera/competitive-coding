#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string p="",s="";
    cin >> p >> s;
    int pl=p.size();
    int sl=s.size();
    int subp=0,subs=0;
    vector<int>freqp;
    vector<int>freqs;
    for(int i=0;i<pl;i++)
    {
        if(i!=pl-1 && p[i]==p[i+1])
        subp++;
        else
        {
            
            freqp.push_back(subp+1);
            subp=0;
        }
    }
    // cout << "Freq in p\n";
    // for(int num:freqp)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    int pushcount=0;
    for(int i=0;i<sl;i++)
    {
        if(i!=sl-1 && s[i]==s[i+1])
        subs++;
        else
        {
            freqs.push_back(subs+1);
            // cout << freqs[pushcount] << " ";
        if(freqs[pushcount]<freqp[pushcount] || (freqs[pushcount]+1)/2 > freqp[pushcount])
           {   cout << "NO" << endl;
            return;
           }
           pushcount++;
           subs=0;
        }
    }
    
    cout << "Yes" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}