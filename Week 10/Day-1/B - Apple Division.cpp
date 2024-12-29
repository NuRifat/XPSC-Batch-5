#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    vector<ll> apple(n);
    ll sum=0,ans=LLONG_MAX;
    for(auto &x:apple){
        cin >> x;
        sum += x;
    }
    for(ll i=0;i< 1<<n;i++){
        ll s = 0;
        for(int j=0;j<n;j++){
            if(i & 1<<j) s+= apple[j];
        }
        ll cur = abs(sum - 2*s);
        ans = min(ans,cur);
    }
    cout << ans << '\n';


    return 0;
}
