#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    int zero = 0, nonZero = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) zero++;
        else nonZero++;
    }

    int ans;
    if(zero==0) ans=0;
    else{
        if(nonZero>=zero-1) ans=0;
        else{
            int mx = *max_element(v.begin(),v.end());
            if(mx==1) ans=2;
            else ans=1;
        }
    }
    cout << ans << '\n';
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
