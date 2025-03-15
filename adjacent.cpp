#include <iostream>
using namespace std;

bool valid(int x, int y) {
    if (y == x + 1) {
        return true;
    }
    if (y < x + 1 && (x + 1 - y) % 9 == 0) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (valid(x, y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}