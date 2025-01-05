#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll t; cin >> t;
   while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll>pre(n+1),v;
        ll cur = 0;
        pre[0]=0;
        for(ll i=1;i<=n;i++){
            ll x; cin >> x;
            pre[i]=pre[i-1]+x;
            cur = max(cur,x);
            v.push_back(cur);
        }
        while(q--){
            ll k; cin >> k;
            ll pos = upper_bound(v.begin(),v.end(),k) - v.begin();
            cout << pre[pos] << " ";
        }
        cout << '\n';
   }

   return 0;
}

