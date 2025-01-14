#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(),a.end());
    ll ans = n+sum+(a[n-1]-a[0]);
    cout << (ans<=m ? "YES" : "NO") << '\n';
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


