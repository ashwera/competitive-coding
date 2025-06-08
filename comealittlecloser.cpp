#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int>x(n);
    vector<int>y(n);
    unordered_map<int,int>xfreq,yfreq;
    for(int i=0;i<n;i++)
    {
        cin >> x[i];
        xfreq[x[i]]++;
        cin >> y[i];
        yfreq[y[i]]++;
    }//take input, store freq

    //shorter boundary incase stray element
    int xmax = *max_element(x.begin(),x.end());
    int xmin = *min_element(x.begin(),x.end());
    int ymax = *max_element(y.begin(),y.end());
    int ymin = *min_element(y.begin(),y.end());
    int localarea=0;
    int sb=LLONG_MAX; 
    int area=(xmax-xmin+1)*(ymax-ymin+1);
    if(xfreq[xmax]==1) 
    {
        //remove this element
        //find next largest x value's iterator. use that index in x and y both
        int idxofmax = max_element(x.begin(),x.end()) - x.begin();
                int temp1 = x[idxofmax]; int temp2 = y[idxofmax];
        x[idxofmax] = -1;
        y[idxofmax] = -1; //element removed
        int newmay = *max_element(y.begin(),y.end());
        int newmax = *max_element(x.begin(),x.end());
        localarea = (newmax - xmin + 1) * (newmay - ymin + 1);
        area = min(localarea,area);
        y[idxofmax] = temp2;
        x[idxofmax]=temp1;
        sb = min(sb, min((newmax - xmin + 1) , (newmay - ymin + 1)));       
        //  cout << "case of xmax" << endl;
        // cout << "removed element is " << idxofmax << endl;
        // cout << "area is " << localarea << endl;
    }
    if(xfreq[xmin]==1) 
{
    int idxofmin = min_element(x.begin(),x.end()) - x.begin();
    int temp1 = x[idxofmin], temp2 = y[idxofmin];
    x[idxofmin] = 1e9+7;  // temporarily remove
    y[idxofmin] = 1e9+7;

    int newminX = *min_element(x.begin(), x.end());
    int newmaxX = xmax; // maxX unchanged after removing minX point
    int newminY = *min_element(y.begin(), y.end());
    int newmaxY = ymax; // maxY unchanged

    localarea = (newmaxX - newminX + 1) * (newmaxY - newminY + 1);
    area = min(area, localarea);

    y[idxofmin] = temp2;
    x[idxofmin] = temp1;

    sb = min(sb, min((newmaxX - newminX + 1), (newmaxY - newminY + 1)));
}

    if(yfreq[ymax]==1) 
    {
        //remove this element
        //find next largest x value's iterator. use that index in x and y both
        int idxofmax = max_element(y.begin(),y.end()) - y.begin();
        int temp1 = x[idxofmax]; int temp2 = y[idxofmax];
        x[idxofmax] = -1;
        y[idxofmax] = -1; //element removed
        int newmay = *max_element(y.begin(),y.end());
        int newmax = *max_element(x.begin(),x.end());
        localarea = (newmax - xmin + 1) * (newmay - ymin + 1);
        area = min(localarea,area);
        //        cout << "case of ymax" << endl;               cout << "removed element is " << idxofmax << endl;
        // cout << "area is " << localarea << endl;
        y[idxofmax] = temp2;
        x[idxofmax]=temp1;
        sb = min(sb, min((newmax - xmin + 1) , (newmay - ymin + 1)));   }
   if(yfreq[ymin]==1) 
{
    int idxofmin = min_element(y.begin(), y.end()) - y.begin();
    int temp1 = x[idxofmin], temp2 = y[idxofmin];
    x[idxofmin] = 1e9+7;
    y[idxofmin] = 1e9+7;

    int newminX = *min_element(x.begin(), x.end());
    int newmaxX = xmax;
    int newminY = *min_element(y.begin(), y.end());
    int newmaxY = ymax;

    localarea = (newmaxX - newminX + 1) * (newmaxY - newminY + 1);
    area = min(area, localarea);

    y[idxofmin] = temp2;
    x[idxofmin] = temp1;

    sb = min(sb, min((newmaxX - newminX + 1), (newmaxY - newminY + 1)));
}

    if(area < n) 
    {
        area+=sb;
    }
    cout << area << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}