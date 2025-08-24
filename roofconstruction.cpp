    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define yes cout << "YES"  << endl;
    #define no cout << "NO" << endl;
    #define input for(int &i:v) cin >> i;

    void print(vector<int> v)
    {
        for(int i:v)
        {
            cout << i << " ";
        }
        cout << endl;
    }


    //cool thing i learnt:
    //left shift a number i>>1
    //xor those together: i xor i>>1 
    //this number is the grey code of i.
    //adjacent greycodes differ by 1 bit. xor is minimised. 
    //similar to how we deal with k maps
    //limitation: works with only pure powers of 2. 


    bool poweroftwo(int x)
    {
        if(x==1) return true;
        if(x%2!=0 || x==0) return false;
        return poweroftwo(x/2);
    }

    int largestpoweroftwolessthan(int n)
    {
        int res = 0;
        for (int i = n; i >= 1; i--) {
            // If i is a power of 2
            if ((i & (i - 1)) == 0) {
                res = i;
                break;
            }
        }
        return res;
    }


    void solve() {
    int n; cin >> n;
    vector <int> v;
    int l;

    if(poweroftwo(n)) l = largestpoweroftwolessthan(n-1);
    else
    l = largestpoweroftwolessthan(n);
    // cout << l << endl;

    for(int i=l-1;i>=0;i--)
    {
        v.push_back(i);
    }
    for(int i=l;i<n;i++)
    {
        v.push_back(i);
    }

    print (v);
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