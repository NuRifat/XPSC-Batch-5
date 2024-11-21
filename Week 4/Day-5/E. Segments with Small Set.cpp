#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> freq;
    ll l = 0, cnt = 0, cnt2 = 0;

    for (ll r = 0; r < n; r++) {
        if (freq[a[r]] == 0) cnt2++;
        freq[a[r]]++;
        while (cnt2 > k) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) cnt2--;
            l++;
        }
        cnt += (r - l + 1);
    }
    cout << cnt << '\n';

    return 0;
}

