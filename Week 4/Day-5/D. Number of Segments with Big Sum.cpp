#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll l = 0, r = 0, sum = 0, ans = 0;

    while (r < n) {
        sum += a[r];
        while (sum >= s) {
            ans += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}
