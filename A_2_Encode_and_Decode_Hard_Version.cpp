#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

string makechar(int x) {
    string y;
    if (x == 0) y = "a"; // handle zero
    while (x > 0) {
        y += 'a' + (x % 11);
        x /= 11;
    }
    reverse(y.begin(), y.end());
    y += 'z';
    return y;
}

int makeint(string x) {
    reverse(x.begin(), x.end());
    int result = 0;
    for (int i = 0; i < x.size(); i++) {
        result += (x[i] - 'a') * pow(11, i);
    }
    return result;
}


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
        output += (makechar(i));
    }
    cout << output << endl;
}

void second(){
    string s;
    cin >> s;
    vector<int>v;
    string el="";
    for(char ch:s){
        if(ch!='z'){
            el+=ch;
        }
        else{
            v.push_back(makeint(el));
            el="";
        }
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