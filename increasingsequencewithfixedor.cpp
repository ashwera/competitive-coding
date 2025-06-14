#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int dupe=n;
    // the idea is simple
    // just take the original number
    // subtract powers of 2 for each set bit RTL
    // then reverse the array
    set<int>answer;
    answer.insert(n);
    int i=0;
    for (int i = 62; i >= 0; --i)
        {
            if ((1ll << i) & n) //bit is set
            {
                int number = n - (1ll << i);
                if(number>0) answer.insert(number);
            }
        }
    cout << answer.size() << endl;
    for(int i: answer)
    {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}