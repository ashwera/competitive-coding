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

int calculate(int a){
    int sum=0;
    
        string s = to_string(a);
        if(s.size() % 2 != 0){
            return 0;
        }
        string fh = s.substr(0,s.size()/2);
        string sh = s.substr(s.size()/2);
        if(sh==fh){
            sum += stoll(s);
        }
    
    return sum;
}

int calculatethree(int al){
    
    int sum=0;
    
        string s = to_string(al);
        if(s.size() % 3 != 0){
            return 0;
        }
        int part = s.size()/3;
        string fh = s.substr(0, part);
        string sh = s.substr(part, part);
        string th = s.substr(2*part, part);
        if(sh==fh && sh==th){
            sum += stoll(s);
        }
    
    return sum;
}

int calculatefive(int al){
    
    int sum=0;
    
        string s = to_string(al);
        if(s.size() % 5 != 0){
            return 0;
        }
        int part = s.size()/5;
        string fh = s.substr(0, part);
        string sh = s.substr(part, part);
        string th = s.substr(2*part, part);
        string foh = s.substr(3*part, part);
        string ffh = s.substr(4*part, part);
        if(sh==fh && sh==th && th==foh && foh == ffh){
            sum += stoll(s);
        }
    
    return sum;
}

int calculateseven(int al){
    
    int sum=0;
        string s = to_string(al);
        if(s.size() % 7 != 0){
            return 0;
        }
        int part = s.size()/7;
        string fh = s.substr(0, part);
        string sh = s.substr(part, part);
        string th = s.substr(2*part, part);
        string foh = s.substr(3*part, part);
        string ffh = s.substr(4*part, part);
        string sxh = s.substr(5*part, part);
        string svh = s.substr(6*part, part);
        if(sh==fh && sh==th && th==foh && foh == ffh && ffh==sxh && sxh==svh){
            sum += stoll(s);
        }
    
    return sum;
}

void solve() {
    string s;
    cin >> s;
    int sum = 0, sumthree=0, sumfive=0, sumseven=0;
    stringstream ss(s);
    string range;
    while (getline(ss, range, ',')) {
        int dash = range.find('-');
        string one = range.substr(0, dash);
        string two = range.substr(dash + 1);
        int ONE = stoll(one);
        int TWO = stoll(two);
        while(ONE<=TWO){
            int seven = calculateseven(ONE);
            int five = calculatefive(ONE);
            int three = calculatethree(ONE);
            int twosum = calculate(ONE);
            if(seven){
                sum += seven;
                // cout << one << " " << two << " " << seven << "seven" << endl;
            }
            else if(five){
                sum+=five;
                // cout << one << " " << two << " " << five << "five" << endl;
            }
            else if(three){
                sum += three;
                // cout << one << " " << two << " " << three << "three "<< endl;
            }
            else if(twosum){
                sum+=twosum;
                // cout << one << " " << two << " " << twosum << "two" << endl;
            }
            ONE++;
        }
    }
    cout << sum+sumthree+sumfive+sumseven << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}