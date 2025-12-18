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
void print(queue<int>& v) {
    while(!v.empty()) {
        cout << v.front() << " ";
        v.pop();
    }
    cout << endl;
}

bool check(vector<int> &v){
    for(int i=0;i<v.size();i++){
        if(v[i]==i+1) return false;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    vector<int>s(n+1,0);
    
    for(int i=0;i<n;i++){
        cin >> v[i];
        s[v[i]] = -1;
    }
    queue<int>q;
    queue<int>dq;
    for(int i=0;i<n+1;i++){
        if(s[i]==0){
            q.push(i);
        }
    }
    dq=q;
    vector<int>dv=v;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            if(q.front()!=i+1){
                v[i]=q.front();
                q.pop();
            }
            else{
                q.push(q.front());
                q.pop();
                v[i] = q.front();
                q.pop();
            }
        }
        // print(q);
    }
    if(check(v))
    {
        // cout <<"sda";
        print(v);
    }
    else{
        v=dv;
        q=dq;
        for(int i=n-1;i>=0;i--){
        if(v[i]==0){
            if(q.front()!=i+1){
                v[i]=q.front();
                q.pop();
            }
            else{
                int temp = q.front();
                q.pop();
                q.push(temp);
                v[i] = q.front();
                q.pop();
            }
        }
    }
        print(v);
    }
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}