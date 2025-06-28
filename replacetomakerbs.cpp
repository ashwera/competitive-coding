#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    stack<char>q;
    int totalclose=0,totalopen=0;
    int change=0;
    for(int i=0;i<n;i++)
    {
        char ch = s[i];
        if(ch == '[' || ch == '{' || ch == '<' || ch == '(')
        {
            totalopen++;
            q.push(ch);
        }
        else
        {
            if(q.empty()) //if nothing to close, it's impossible
            {
                cout << "Impossible" << endl;
                return;
            }
            totalclose++;
            //closing
            char last = q.top();
            if(ch==']')
            {
                if(last!='[')
                {
                    change++;
                }
                q.pop();
            }
            else if(ch=='}')
            {
                if(last!='{')
                {
                    change++;
                }
                q.pop();
            }
            else if(ch=='>')
            {
                if(last!='<')
                {
                    change++;
                }
                q.pop();
            }
            else if(ch==')')
            {
                if(last!='(')
                {
                    change++;
                }
                q.pop();
            }
        }
    }
    if(q.empty() && totalclose==totalopen)
        cout << change << endl;
        else cout << "Impossible" << endl;
}
signed main() {
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}