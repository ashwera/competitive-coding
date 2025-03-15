#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        // Your code here
        int n;
        // vector <int> a;
        // vector <int> b;
        set <int> ans;
        set <int> ans2;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ans2.insert(a);
        }
        for(int i=0;i<n;i++)
        {
            int b;
            cin >> b;
            ans.insert(b);
        }
        if(ans.size()>=3 || ans.size()>=2&&ans2.size()>=2 || ans2.size()>=3)        
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}