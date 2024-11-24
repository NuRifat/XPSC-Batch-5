#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    if(n%2!=0){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    int m = n/2;
    for(int i=1;i<=m;i++){
        if(i%2!=0) cout << "AA";
        else cout << "BB";
    }
    cout << "\n";
    return;
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
