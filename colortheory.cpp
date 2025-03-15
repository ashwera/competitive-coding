#include <iostream>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        while (charSet.find(s[right]) != charSet.end()) //alphabet exists in charset
        {
            charSet.erase(s[left]);x
            left++;
        }
        charSet.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main() {
    string s = "";
    cin >> s;
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
