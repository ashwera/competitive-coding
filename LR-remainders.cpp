#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;
    //reverse psych
    int l=0,r=0;
    //find index of last remaining element 
    int index=0; 
    for(int i=0;i<s.length()-1;i++)
    {
        char ch = s[i];
        if(ch=='L') index++;
    }
    // cout << index << endl;
    int prod=v[index];
    vector<int>answer;
    answer.push_back(prod%m);
    for(int i = s.length()-2 ; i>=0;i--)
    {
        if(s[i]=='L')
        {
            //take index-l 
            l--;
            prod = prod*v[index+l]%m;
            answer.push_back(prod);
        }
        else
        {
            r++;
            prod = prod*v[index+r]%m;
            answer.push_back(prod);
        }
    }
    for(int i=answer.size()-1;i>=0;i--)
    {
        cout << answer[i] << " ";
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
        cout<<endl;
    }
}