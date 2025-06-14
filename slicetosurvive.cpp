#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    //n m are grid size.
    //a,b is initial monster coordinate 
    //M cuts, F runs
    //m would want to cut at the border of F's position, on the side that removes max grid
    //f would want to move to new center
    int cut=0;
    int area = n*m;
    while(area>0)
    {
        int left = b-1;
        int right = m-b;
        int verticalcut = max(left,right);
        verticalcut = verticalcut*n; 
        // cout << verticalcut << endl;
        //if u cut vertically, u remove area by removing all rows of select columns!
        //so multiply by row number and select column
        int up = a-1;
        int down = n-a;
        int horizontalcut = max(up,down);
        horizontalcut *= m;
        // cout << horizontalcut << endl;
        //same logic as vertical cut.
        //whichever is more gets cut
        //dimensions become row, b for vertical and a,col for horizontal
        cout << "left: " << left << "\nright: " << right << "\nup: " << up << "\ndown: " << down << endl;
        if(verticalcut > horizontalcut)
        {
            //cut vertically
            //dimensions become numver of rows, a and F gets placed in their center:
            //x coordinate of F is B and Y is in A 
            m -= max(left,right);
            cout << "cut vertically "<<endl;
            cut++;
        }
        else 
        {
            //dimensions become b, number of columns
            //X coordinate -> b, Y-> a
            // a rows ka middle row is a/2
            //horizontal cut, remove down or up
            //new dimensions become col remains same rows reduce to n - u or d 
            cout << "cut horizontally "<<endl;
            n = n - max(up,down);
            cut++;
        }
        a = n/2;
        b = m/2;
        cout << "dimensions: " << n << " " << m << endl;
        area = n*m;
        if(area==1) break;
        if((left < 0 || right < 0) && (up < 0 || down < 0))
        break;
        cout << "F is at : " << a << " " << b << endl;
        if(n==1 || m==1)
        {
            cut+=2; break;
        }
    }
    cout << cut << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}