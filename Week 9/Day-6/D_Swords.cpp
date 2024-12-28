#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    for(auto &x:a){
        cin >> x;
        mx = max(mx,x);
    }

    ll sum=0,gcd=0;
    for(auto x:a){
        sum += mx-x;
        gcd = __gcd(gcd,mx-x);
    }

    ll ans = (gcd==0 ? 0 : sum/gcd);

    cout << ans << " " << gcd << '\n';

    return 0;
}