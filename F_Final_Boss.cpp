#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}


void print(priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>v) {
    while(!v.empty()) {
        auto [f, s] = v.top();
        cout << f << " " << s << endl;
        v.pop();
    }
    cout << endl;
}

int solve() {
    int h, n;
    cin >> h >> n;
    
    vector<int>dam(n),time(n);
    for(int &i:dam) cin >> i;
    for(int &i:time) cin >> i;

    if(h<=n){
        return 1;
    }   
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[time[i]] += dam[i];
    }
    vector<bool>seen(200005,false);
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    for(int i=0;i<n;i++){
        if(!seen[time[i]])
        {
            pq.push({1+time[i] , time[i]}); //cur time, update time
            seen[time[i]]=true;
        }
    }
    // print(pq);

    //we have populated pq for ct and ut
    //for each iteration, subtract mp[ut] from health and add ut to ct 
    //keep adding current time to something
    //when health becomes 0, return sum
    int ans = 1; //used first attack on everything!
    int first=0;
    for(int i:dam)
    {
        first+=i;
    }
    h-=first;
    while(h>0){
        int ct = pq.top().first;
        int ut = pq.top().second;
        // cout << "taken attack " << mp[ut] << endl;
        // cout << "now health is " << h-mp[ut] << endl;
        // cout << "new time is " << ct << " next attack at " << ct+ut << endl;
        ans = ct;
        pq.pop();
        ct+=ut;
        pq.push({ct,ut});   
        h -= mp[ut];     
    }
    return ans;
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