#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
       string s,t="";
       cin >> s;
       int l = s.length();
       int i;
       for(i=0;i<l-2;i++)
       {
       t.push_back(s[i]);
       }
       t.push_back('i');
       cout << t << endl;
    }
    return 0;
}