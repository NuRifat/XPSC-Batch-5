#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,ans=0; cin >> n;
    map<ll,ll> mp;
    for(int i=1;i<=n;i++){
        int x; cin >> x;
        mp[x-i]++;
        ans += mp[x-i];
    }
    cout << ans-n << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}


