#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--) {
        int a;
        cin >> a;
        mp[a]++;
    }
    int cnt = 0;
    for (const auto& p : mp) {
        cnt = max(cnt, p.second);
    }

    cout << cnt << '\n';

    return 0;
}
