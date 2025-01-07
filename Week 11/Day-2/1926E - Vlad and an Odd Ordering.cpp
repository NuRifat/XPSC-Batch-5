#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    for(ll i=1; ;i*=2){
        ll a=n/i;
        ll b=(a+1)/2;
        if(k<=b){
            ll k_odd = (2*k)-1;
            cout << k_odd*i << '\n';
            return;
        }
        else k -= b;
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
        solve();
   }

   return 0;
}


