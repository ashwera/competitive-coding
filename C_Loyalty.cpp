#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YEsum"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, x;
    cin >> n >> x;
    multiset<int> ms;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i]; 
        ms.insert(a[i]); 
    }
    int sum=0;
    int prev=sum/x;
    int bonus=0;
    vector<int> order;
    while(!ms.empty()){
        int need = x - (sum % x);
        if(need==x) need = x; // means no single item cross unless equal to x
        auto it = ms.lower_bound(need);
        if(need!=x && it!=ms.end()){
            // take the elemetn more than our need sabse zyada  wala 
            auto it2 = ms.end(); --it2;
            if(*it2 >= need){
                int pick = *it2;
                order.push_back(pick);
                ms.erase(it2);
                sum += pick;
                if(sum/x > prev){ bonus += pick; prev = sum/x; }
                continue;
            }
        }
        // otherwise pick smallest
        int pick = *ms.begin();
        ms.erase(ms.begin());
        order.push_back(pick);
        sum += pick;
        if(sum/x > prev){ 
            bonus += pick; 
            prev = sum/x; 
        }
    }

    cout << bonus << endl;
    for(int i=0;i<order.size();++i){
        cout << order[i] << " ";
    }
    cout << endl;
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