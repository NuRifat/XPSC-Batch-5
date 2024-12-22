#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    ll ans = a[n/2];

    cout << ans << '\n';
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