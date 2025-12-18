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

int f(int a, int b){
    if(a>b) return 1;
    if(a<b) return -1;
    return 0;
}

int solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int count=0;
    if(f(a,c)+f(b,d)>0) count++;
    if(f(a,d)+f(b,c)>0) count++;
    if(f(b,c)+f(a,d)>0) count++;
    if(f(b,d)+f(a,c)>0) count++;
    return count;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    int i=0;
    while (i<t) {
        i++;
        cout << solve() << endl;
    }
}