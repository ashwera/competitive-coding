#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    int n;
    cin >> n;
    n*=2;
    char trump;
    cin >> trump;
    //store cards in 4 queues
    //eradicate all pairs except trump pile
    //remove all from trump, starting the middle. 
    //use a multiset
    multiset<char,int>hearts,spades,diamonds,clubs;
    while(n--)
    {
        int number;
        char type;
        cin >> number;
        cin >> type;
        switch (type)
        {
        case 'H':
            hearts.insert(number);
            break;
        case 'D':
            diamonds.insert(number);
            break;
        case 'S':
            spades.insert(number);
            break;
        case 'C':
            clubs.insert(number);
            break;
        default:
            break;
        }
    }
    //go thru each non trump card
    multiset<char,int>remainders;
    if(trump!='S')
    {
        //empty s
        for(int i=0;i<spades.size();i++)
        {
            int small = *spades.begin();
            int big = *prev(spades.end()); 
            if(small<big)
            {
                //output them
                cout << small << 'S' << " ";
                cout << big << 'S' << " ";
                spades.erase(big);
                spades.erase(small);
            }
            else{
                remainders.insert(small);
                spades.erase(small);
            }
        }
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}