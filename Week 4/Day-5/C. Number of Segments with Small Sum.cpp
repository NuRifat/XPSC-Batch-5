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

    int l=0,r=0;
    ll sum = 0,ans=0;
    while(r<n){
        sum += v[r];
        if(sum<=s) ans += r-l+1;
        else{
            while(sum>s && l<=r){
                sum -= v[l];
                l++;
            }
            if(sum<=s) ans += r-l+1;
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}
