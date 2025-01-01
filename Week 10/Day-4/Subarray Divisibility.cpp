#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod(ll x, ll n) {
    return (x % n + n) % n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> freq(n, 0);

    ll remain = 0, cnt = 0;
    freq[0] = 1;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        remain = mod(remain + x, n);
        cnt += freq[remain];
        freq[remain]++;
    }

    cout << cnt << '\n';

    return 0;
}
