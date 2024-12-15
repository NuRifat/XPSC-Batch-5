#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll dif = 0;
    for(int i=0;i<n;i++){
        cin >> b[i];
        a[i] -= b[i];
        dif = max(dif,a[i]);
    }

    bool ok = true;
    for(int i=0;i<n;i++){
        if(dif!=a[i] && b[i]){
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >>t;
    while(t--){
        solve();
    }

    return 0;
}
