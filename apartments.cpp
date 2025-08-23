#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(vector<int>v)
{
    for(int i:v) cout << i << " ";
    cout << endl;
}
void solve() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>applicant(n) , apartment(m);
    for(int &i:applicant) cin>>i;
    for(int &i:apartment) cin>>i;
    sort(apartment.begin(),apartment.end());
    sort(applicant.begin(),applicant.end());
    int count=0;
    int a=0;
    // print(apartment);
    // print(applicant);
    //try filling each apartment with a person.
    //range for a good apt is that its between applicant-k and +k
    for(int i=0;i<m;i++)
    {
        // is there any applicant who can live in this apartment?
        // go forward in applicant and assign apartments. then go backwards 
        int x = apartment[i];
        if(applicant[a]+k >= x && applicant[a]-k <= x)
        {
            a++;
            count++;
        }
        else if(applicant[a]+k < x) {
            a++; i--;
        }
        if(a==n) break;
    }
    cout << count << endl;
}
signed main() {
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}