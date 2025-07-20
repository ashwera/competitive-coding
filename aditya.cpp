#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,k,q;
    cin >> n >> m >> k >> q;
    vector<pair<int,int>>persons;
    while(k--)
    {
        int x,y;
        cin >> x >> y;
        persons.push_back({x,y});
}
    vector<pair<int,int>>relics;
    while(q--)
    {
        int x,y;
        cin >> x >> y;
        relics.push_back({x,y});
}
    vector<vector<int>>distance;
    for(auto person:persons)
    {
        //each person's dist to each relic
        vector<int>p;
        int x = person.first;
        int y = person.second;
        for(auto rel:relics)
        {
            int x1 = rel.first;
            int y1 = rel.second;
            int dis = abs(y1-y) + abs(x1-x);
            p.push_back(dis);
            //p[i] is the dist between person and ith relic
        }
        distance.push_back(p);
        //among all columns in d, pick the smallest's frequency
    }
    
    int count = 0;
    for (int col = 0; col < q; col++) {
    int mindis = 1e9;
    for (int row = 0; row < k; row++) {
        mindis = min(mindis, distance[row][col]);
    }
    int freq = 0;
    for (int row = 0; row < k; row++) {
        if (distance[row][col] == mindis) freq++;
    }
    count = max(count, freq);
}
cout << count << endl;

    return 0;
}
