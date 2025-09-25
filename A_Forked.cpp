#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

bool isDiagonal(pair<int,int>A, pair<int,int>B)
{
    if(A.first == A.second && B.first == B.second) return true;
    if(A.first == B.second && B.first == A.second) return true;
    if(abs(A.first-A.second) == abs(B.first-B.second)) return true;
    if(A.first+A.second == B.first+B.second) return true;
    return false;
}

void solve() {
    int n,m;
    cin >> n;
    cin >> m;
    int x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    int ans=0;
    if((x1==0 && y1==0) && x2&y2==0)
    {
        if(n==max(x2,y2)/2 || m==max(x2,y2)/2 )
        {
            if(n==m) ans=1;
            else ans=2;
        }
    }
    else if((y2==0 && x2==0) && x1&y1==0)
    {
        if(n==max(x1,y1)/2 || m==max(x1,y1)/2 )
        {
            if(n==m) ans=1;
            else ans=2;
        }
    }
    else if(isDiagonal({x1,y1},{x2,y2}))
    {
        cout << "entered\n";
        int d1 = (abs(x1-y2) + 1 ) /2;
        int d2 = (abs(x2-y1) + 1 ) /2;
        cout << d1 << " " << d2;
        if(max(n,m)==max(d1,d2) && min(m,n) == min(d1,d2))
        {
            
        cout << "entered in\n";
            if(n==m)
            {
                ans = 1;
            }
            else{
                ans = 2;
            }
            cout << ans << endl;
        }
    }
    cout << ans << endl; 
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}