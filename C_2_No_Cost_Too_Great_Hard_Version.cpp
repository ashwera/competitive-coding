#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:a) cin >> i;
#define inputb for(int &i:b) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

set<int> getPrimeFactors(int x) {
    set<int> factors;
    for (int i = 2; i*i <= x; ++i) {
        while (x % i == 0) {
            factors.insert(i);
            x /= i;
        }    
    }
    if (x > 1) factors.insert(x);
    return factors;
}

void solve() {
    int n; cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    int even=0;
    input
    inputb
    
    vector<pair<int,int>>something;
    for(int i=0;i<n;i++){
        something.push_back({b[i],a[i]});
    }
    sort(something.begin(),something.end());

    map<int,int>factors;
    for(int i=0;i<n;i++){
        int x = something[i].second;
        set<int>s=getPrimeFactors(x);
        for(int l:s){
            factors[l]++;
            if(factors[l]==2){
                cout << 0 << endl;
                return;
            }
        }
}


        // change B0 ONCE 
    set<int>old = getPrimeFactors(something[0].second);
    set<int>newset = getPrimeFactors(something[0].second+1);
    for(int l:old){
        factors[l]--;
    }
    for(int m:newset){
        factors[m]++;
        if(factors[m]==2)
        {
            cout << something[0].first << endl;
            return;
        }
    }
    for(int l:old){
        factors[l]++;
    }
    for(int m:newset){
        factors[m]--;
    }
    //make a choice
    //either do b2 or do b1 some number of times 
    //k should be less or equal to than b2/b1 


    //DOING B0 SOME NMBER OF TIMES 
    int k = (something[1].first+something[0].first-1)/something[0].first;
    for(int i=2;i<=k;i++){
        old = getPrimeFactors(something[0].second);
        newset = getPrimeFactors(something[0].second+i);
        for(int l:old){
            factors[l]--;
        }
        for(int m:newset){
            factors[m]++;
            if(factors[m]==2)
            {
                cout << something[0].first*i << endl;
                return;
            }
        }
        for(int l:old){
            factors[l]++;
        }
        for(int m:newset){
            factors[m]--;
        }
    }
    //change a2 once 
    old = getPrimeFactors(something[1].second);
    newset = getPrimeFactors(something[1].second+1);
    for(int l:old){
        factors[l]--;
    }
    for(int m:newset){
        factors[m]++;
        if(factors[m]==2)
        {
            cout << something[1].first << endl;
            return;
        }
    }
    for(int l:old){
        factors[l]++;
    }
    for(int m:newset){
        factors[m]--;
    }
    //change a3 once 
    if(n>2 && something[2].first < something[1].first+something[0].first)
    {old = getPrimeFactors(something[2].second);
    newset = getPrimeFactors(something[2].second+1);
    for(int l:old){
        factors[l]--;
    }
    for(int m:newset){
        factors[m]++;
        if(factors[m]==2)
        {
            cout << something[2].first << endl;
            return;
        }
    }
    for(int l:old){
        factors[l]++;
    }
    for(int m:newset){
        factors[m]--;
    }}
    
       cout << something[0].first+something[1].first << endl;
    
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