#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;

    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    int l=0,r=0,ans=n+1;
    ll sum = 0;
    while(r<n){
        sum += v[r];
        while(sum>=s){
            ans = min(ans,r-l+1);
            sum -= v[l];
            l++;
        }
        r++;
    }

    if(ans==n+1) cout << -1 << '\n';
    else cout << ans << '\n';

    return 0;
}
