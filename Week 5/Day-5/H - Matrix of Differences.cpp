#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    ll left = 1, right = n * n;
    bool flag = 0;

    for (ll row = 0; row < n; row++) {
        for (ll col = 0; col < n; col++) {
            if (flag) {
                a[row][col] = left++;
            } else {
                a[row][col] = right--;
            }
            flag ^= 1;
        }
        if (row & 1) reverse(a[row].begin(), a[row].end());
    }

    for (ll row = 0; row < n; row++) {
        for (ll col = 0; col < n; col++) {
            cout << a[row][col] << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
