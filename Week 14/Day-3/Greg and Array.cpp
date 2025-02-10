#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m,k;
    cin >> n >> m >> k;
    ll a[n], d[m+1], lrd[m][3];
    memset(d,0,sizeof(d));

    for(ll i=0;i<n;i++)
        cin >> a[i];

    for(ll i=0;i<m;i++)
        cin >> lrd[i][0] >> lrd[i][1] >> lrd[i][2];

    //frequency array on lrd array using difference array
    for(ll i=0;i<k;i++){
        ll l,r;
        cin >> l >> r;
        l--;
        d[l]++;
        d[r]--;
    }
    for(ll i=1;i<m;i++)
        d[i] += d[i-1];

    for(ll i=0;i<m;i++)
        lrd[i][2] *= d[i];

    //frequency array again using difference array
    ll ans[n+1];
    memset(ans,0,sizeof(ans));
    for(ll i=0;i<m;i++){
        ans[lrd[i][0]-1] += lrd[i][2];
        ans[lrd[i][1]] -= lrd[i][2];
    }
    a[0] += ans[0];
    for(ll i=1;i<n;i++)
        ans[i] += ans[i-1], a[i]+=ans[i];

    for(ll i=0;i<n;i++){
        cout << a[i] << " ";
    }


    return 0;
}
