#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i] && b[i]!=c[i]){
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
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
