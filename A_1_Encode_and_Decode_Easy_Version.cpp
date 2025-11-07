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

    void first(){
        int n;
        cin >> n;
        vector<int>v(n);
        input
        string output="";
        for(int i:v){
            output += (i + 'a' - 1);
        }
        cout << output << endl;
    }

    void second(){
        string s;
        cin >> s;
        vector<int>v;
        for(char ch:s){
            v.push_back(ch-'a'+1);
        }
        cout << v.size() << endl;
        print(v);
    }

    signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
        string s;
        cin >> s;
        if(s=="first"){
            first();
        }
        else second();
    }