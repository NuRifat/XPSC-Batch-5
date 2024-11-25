#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    for(int i=n-k;i<=n;i++) cout << i << " ";
    for(int i=n-k-1;i>0;i--) cout << i << " ";
    cout << '\n';
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
