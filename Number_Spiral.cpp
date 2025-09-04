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

void solve() {
int x,y;
cin >> x >> y;
//diagonals have 1,3,7 etc agp where a = 1 and d=2k and k is natural numbers 
// 1 + 1+2 + 3+4 + ...
//to find x,y ; find higher number ka diagonal element
//for 4,5, check 5,5 and then go back one row by ADDING one or go back one column by SUBTRACTING one
//this is when bigger is odd. if even, follow reverse sytem 
int maxoftwo = max(x,y);
int diag = (maxoftwo*maxoftwo) - (maxoftwo-1);
if(maxoftwo%2==0){
    //if manlo 3,4 hai
    //go back one row
    if(x<y)
    {
        //3,4 case
        diag -= (y-x);
    }
    else{
        //4,3 case, go back one coln
        diag += (x-y);
    }
}
else
{
    //ulta
    //4,5 case 
    if(x<y)
    {
        diag += (y-x);
    }
    else{
        diag -= (x-y);
    }
}
cout << diag << endl;
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