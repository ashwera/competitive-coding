#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n,q; 
    cin >> n >> q;
    vector <int> v(n);
    input
    int oc=0, ec=0;
    int sum=0;
    for(int &i:v){
        if(i%2) oc++;
        else ec++;
        sum+=i;
    }
    while(q--){
        int type, val;
        cin >> type >> val;
        if(type==0)
        {
            //add to all even 
            sum += (ec*val);
            if(val%2==0){
                //even stays even 
            }
            else{
                //even becomes odd henceforth
                oc = n;
                ec=0;
            }
            // cout << "query, adding " << val << " " << ec << " times\n" << "SUM IS " << sum << endl;
        }
        else{
            sum += (oc*val);
            if(val%2==0){
                //odd remain odd 
            }
            else{
                ec=n;
                oc=0;
            }
            // cout << "query, adding " << val << " " << oc << " times\n"<< "SUM IS " << sum << endl;
        }
            cout << sum << endl;

    }
    // cout << sum << endl;
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