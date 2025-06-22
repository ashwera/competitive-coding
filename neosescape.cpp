#include <bits/stdc++.h>
using namespace std;
#define int long long

//PROBLEM HERE: FAILS wrong answer 79th numbers differ - expected: '1', found: '2' 

void print(vector<bool> v)
{
    for(auto i:v)
    {
        cout << i << " ";
    }
    cout <<endl;
}

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin >> i;
    }
    vector <int> unsortedv = v;
    sort(v.rbegin(),v.rend());
    //check for each element in sorted v in unsorted v.
    // update reachable elements
    // once map of all elements is reachable, exit
    vector<bool>reachable(n,false);
    int clone=0;
    int a=0;
    int size=n;
    while(size>0)
    {
        int element = v[a];//largest element
        auto rit = find(unsortedv.rbegin(),unsortedv.rend(),element);//return last occurence
        
        auto it = rit.base() - 1;
        
        int idx = it - unsortedv.begin();
        //reduce falses
        // cout << idx << endl;
        if(!reachable[idx])
        {
            size--;
            reachable[idx]=true;
            clone++;//new clone added.
            //reduce this number to out of bounds so this is never returned again for find. 
        }
        // cout << clone << endl;
        if (idx < n - 1 && !reachable[idx + 1]) 
        {
            size--;
            reachable[idx + 1] = true;
        }

        if (idx > 0 && !reachable[idx - 1]) 
        {
            size--;
            reachable[idx - 1] = true;
        }

        unsortedv[idx] = -1; //beyond reachx           // print(reachable);

        //for repeated largest values at distance, adjust the find function
        //next time it should return index of next occurence of the largest element. 
        a++;
        if(a==n) break;
    }
    cout << clone <<endl;
}
signed main() {
    int t;
    cin >> t;X
    while (t-- > 0) {
        solve(); 
    }
}