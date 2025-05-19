#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve() {
    int m , n;
    cin >> n >> m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }

    //traverse LTR. when match not found and a is reached to end, 
    //move forward with b's second element
    //and check for this till the end

    int j=0; //b's first element
    int currentindex=0;
    int countltr=0;
    int targetltr=-1;
    for(int i = 0;i<n;i++) //fixed boundary
    {
        if(a[i]>=b[j])
        {
            // cout << "match found at " << a[i] << " " << b[j] << endl;
            //move to next b element
            j++;
            //last used index of a
            currentindex=i;
        }
        else //not a match and 
        {
            // cout  << "not a match " << i <<endl;
            //b's last element not reached but a's last element reached.
            if(i>=n-1)
            {
                countltr++;
                targetltr=b[j];
                j++; //move forward
                i=currentindex; //loop ke baad it will add one to it. 
            }
        }
        if(j==m)
        break;
    }
    while(j<m) //handle leftover b elements
    {
        countltr++;
        targetltr=b[j];
        j++;
    }

    //now traverse RTL
    currentindex=n-1;
    j=m-1;
    int targetrtl;
    int countrtl=0;
    for(int i = n-1; i>=0; i--) //fixed boundary
    {
        if(a[i]>=b[j])
        {
            // cout << "match found at " << a[i] << " " << b[j] << endl;
            //move to next b element
            j--;
            //last used index of a
            currentindex=i;
        }
        else //not a match and 
        {
            // cout  << "not a match " << i <<endl;
            //b's last element not reached but a's last element reached.
            if(i<=0)
            {
                // cout << "here\n" ;
                countrtl++;
                targetrtl=b[j];
                j--; //move forward
                i=currentindex; //loop ke baad it will add one to it. 
            }
        }
        if(j==-1)
        break;
    }
    while(j>=0) //handle leftover b elements
    {
        countrtl++;
        targetrtl=b[j];
        j--;
    }
    
    if(countltr==0 || countrtl==0)
    {
        return 0;
    }
    else if(countltr>1 && countrtl>1)//no hopes
    {
        return -1;
    }
    else if (countltr==1)
    {
        return targetltr;
    }
    else 
    {
        return targetrtl;
    }
}
signed main() {
    int t;
    cin >> t;
    vector<int>ans;
    while (t-- > 0) {
        int a = solve(); 
        ans.push_back(a);
    }
    for(int i:ans)
    {
        cout << i << endl;
    }
}