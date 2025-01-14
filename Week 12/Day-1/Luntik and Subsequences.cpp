#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int cnt_0=0,cnt_1=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==1) cnt_1++;
        else if(x==0) cnt_0++;
    }
    ll ans = 1LL*(cnt_1*(1LL << cnt_0));
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

