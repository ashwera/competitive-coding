#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s="";
    cin >> n >> s;
    int score = n;
    int endswith = s[n-1]-'0';
    // bool alrbest = true;
    int beginswith = s[0]-'0';
    
    // for(int i=0;i<n-1;i++)
    // {
    //     //check if alr best
    //     int a = s[i]-'0';
    //     int b =s[i+1] -'0';
    //     if(a>b)//case of 10
    //     {
    //         alrbest = false;
    //         break;
    //     }
    // }   
    // if(!alrbest)
    // {
    //     alrbest=true;
    //     for(int i=0;i<n-1;i++)
    // {
    //     //check if alr best
    //     int a = s[i]-'0';
    //     int b =s[i+1] -'0';
    //     if(a<b)//case of 01
    //     {
    //         alrbest = false;
    //         break;
    //     }
    // }   
    // }
    // // cout << alrbest << endl;

    int zc=0;
    int oc=0;
    int breaks=0;
    int totalones=0;
    int totalzeroes=0;
    for(int i=0;i<n;i++)
    {
        //count and reset
        if(s[i]=='0')
        {
            if(!zc)
            {
                //first stream of zeroes
                zc++;
                totalones+=oc;
                oc=0;
                breaks++;
            }
        }
        else//found 1 
        {
            if(!oc)
            {
                totalzeroes+=zc;
                zc=0;
                oc++;
                breaks++;
            }
        }
    }
    if(s[0]=='0') breaks--;
    // else if(alrbest) breaks--;
// 
    // cout << "breaks before removing breaks " << breaks << endl;
    //did not consider last character.
    //if second last and last are different, add break

    breaks-=2;
    totalzeroes+=zc;
    totalones+=oc;
    // cout << "breaks before considering neg breaks " << breaks << endl;
    if(breaks<1)
    {
        breaks=0;
        if(totalones) //if there is a one
        {
            breaks++;
        }
        //else break cant be negative so make it zero
    }
    // cout << totalones << totalzeroes << endl;
    // if(!totalzeroes)  
    // {breaks++;}
    // if(alrbest)
    // {        
    //     cout << n+breaks << endl; return;
    // } 
    cout << score+breaks << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}