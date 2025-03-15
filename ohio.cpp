#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        string s = "";
        cin >> s;
        bool valid = false;
        int l = s.length();
        for(int i=0;i<(l-1);i++)
        {
            if(s[i]==s[i+1])
            {
                valid = true;
            }
        }
        if(valid)
        cout << 1 << endl;
        else
        cout << l << endl;
    }
    return 0;
}