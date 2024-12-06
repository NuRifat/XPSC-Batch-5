#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> arr(n+1);
        for(ll i=1;i<=n;i++) cin >> arr[i];
        ll ans = 0;
        for(ll i=1;i<=n;i++) ans = __gcd(ans,abs(arr[i]-i));
        cout << ans << '\n';
    }

    return 0;
}