#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<pair<ll,ll>> a(n);
        for(ll i=0;i<n;i++){
            ll x; cin >> x;
            a[i]=make_pair(x,i);
        }
        sort(a.begin(),a.end());
        vector<ll> b(n),ar(n);
        for(ll i=0;i<n;i++){
            cin >> b[i];
        }
        sort(b.begin(),b.end());
        for(ll i=0;i<n;i++){
            ar[a[i].second] = b[i];
        }
        for(auto i:ar){
            cout << i << " ";
        }
        cout << '\n';

    }

}
