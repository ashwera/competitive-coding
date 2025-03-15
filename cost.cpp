#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        // Your code here
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        bool found =true;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n!=k)
        {
            for(int i=1;i<n-k+2;i++)
            {
                if(v[i]!=1 && found)
                {
                    found=false;
                }
            }
            if(found)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            int i = 1, c = 1;
            while (i < n) {
            if (v[i] != c) {
                break;
            }
            i += 2;
            c+=1;
        }
        cout << c << endl;
    }
}
return 0;
}