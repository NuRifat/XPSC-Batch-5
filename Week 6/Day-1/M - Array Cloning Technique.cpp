#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        map<ll,ll> mp;
        ll mx = LLONG_MIN;
        for(ll i=0;i<n;i++){
            ll x; cin >> x;
            mp[x]++;
            mx = max(mx,mp[x]);
        }

        if(mx==n) cout << 0 << '\n';
        else {
            ll cnt = 1;
            while(mx<=n){
                if(mx+mx>=n){
                    cnt += n-mx;
                    break;
                }
                cnt += mx;
                mx = mx*2;
                cnt++;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}

