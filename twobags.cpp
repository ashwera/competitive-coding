#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    map<int, int> freqMap;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freqMap[v[i]]++; // Update frequency in the map
    }
    
    return 0;
}