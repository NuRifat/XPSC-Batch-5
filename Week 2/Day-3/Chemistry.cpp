#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int k, const string& s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    int oddCount = 0;
    for (const auto& entry : freq) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }
    int remainingLength = n - k;
    int allowedOdds = (remainingLength % 2 == 0) ? 0 : 1;

    return oddCount <= allowedOdds + k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        if (solve(n, k, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
