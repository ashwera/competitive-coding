    #include <bits/stdc++.h>
    using namespace std;
    #define int long long

    void solve() {
        //intuition: not possible if same size isnt available: largest or smallest gets left over. 
        //need at least 2 of each size for proper shuffling
        int n;
        cin >> n;
        map<int,int>v;
        set<int>uniquesizes;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v[a]++;
            uniquesizes.insert(a);
        }
        for (auto [key, freq] : v) 
        {
            if (freq < 2) 
            {
                cout << -1 << endl;
                return;
            }
        }
        //but if not, shuffle by size
        vector<int>answer(n);
        int k = 0;
        int a=0;
        //first n people with same size get n n-1 n-2 ... 1 and so on. 
        while(k<n)
        {
            int size = *uniquesizes.begin(); // pop first size
            uniquesizes.erase(uniquesizes.begin()); 
            // cout << "size " << size << endl;
            int numberofshuffles = v[size]+k;
            //fill up answer starting with number of shuffles and ending before k
            int lastfilled = k;
            while(numberofshuffles>lastfilled)
            {
                if((a+1)!=numberofshuffles){
                answer[a]=numberofshuffles;
                }
                else{
                    //a is the same as index. swap left or right. safest: swap left if number is smallest
                    answer[a]=numberofshuffles;
                    swap(answer[a-1],answer[a]);
                }
                a++;
                numberofshuffles--;
            }
            k += v[size];
        }

        for(int n:answer)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    signed main() {
        int t;
        cin >> t;
        while (t-- > 0) {
            solve(); 
        }
    }