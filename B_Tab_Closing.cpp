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

int solve() {
    int a,b,n;
    int count=1;
    cin >> a >> b >> n;
    if((b*n) < a) return 1;
    if(a==b) return 1;
    while(true){
        if(double(a)/double(n) < b){
            count++;
        }
        else{
            if(count>2) count=2;
            return count;
        }
        n--;
    }
    return count;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        cout << solve() << endl;
    }
}