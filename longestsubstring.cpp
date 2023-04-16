#include <iostream>
#include <unordered_set>

using namespace std;

int longestSubstring(string s) {
    int n = s.length();
    unordered_set<char> seen;
    int ans = 0, i = 0, j = 0;
    while (i < n && j < n) {
        if (seen.find(s[j]) == seen.end()) {
            seen.insert(s[j++]);
            ans = max(ans, j - i);
        } else {
            seen.erase(s[i++]);
        }
    }
    return ans;
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << longestSubstring(s) << endl;
    return 0;
}
