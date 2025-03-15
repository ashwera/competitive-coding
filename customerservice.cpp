#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        vector<vector<int>> arr;
        vector<int> ones;
        for(int i = 0; i < n; i++){
            arr.push_back(vector<int>(n));
            for(auto &x: arr[i]) cin >> x;
        }
        if(n == 1){
            cout << 1 << '\n';
            continue;
        }
        for(int i = n-1; i >= 0; i--){
            int counter = 0;
            for(int j = n-1; j >= 0; j--){
                if(arr[i][j] == 1) counter++;
                else break;
            }
            if(counter != 0) ones.push_back(counter);
        }
        sort(ones.begin(),ones.end());
        int answer = 1;
        for(int i = 0; i < ones.size(); i++){
            if(ones[i] >= answer) answer++;
        }
        if(answer > n) answer = n;
        cout << answer << '\n';        
    }
    
    return 0;
}