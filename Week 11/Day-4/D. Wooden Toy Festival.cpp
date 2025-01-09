#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        // lambda function
        auto ok = [&](ll time) {
            ll cnt = 1, l = 0;
            for (ll r = 0; r < n; r++) {
                if (a[r] - a[l] > 2 * time) {
                    l = r;
                    cnt++;
                }
            }
            return cnt <= 3;
        };

        // 2 pointers
        ll l = 0, r = 1e9, mid, ans;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (ok(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
