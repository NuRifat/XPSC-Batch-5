#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x,y; cin >> x >> y;
    ll cnt;
    if(y>0){
        cnt = (y+1)/2;
        x -= ((cnt*15)-(y*4));
        if(x<1){
            cout << cnt << '\n';
            return;
        }
        else{
            cnt += (x+14)/15;
            cout << cnt << '\n';
            return;
        }
    }
    else{
        cnt = (x+14)/15;
        cout << cnt << '\n';
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
