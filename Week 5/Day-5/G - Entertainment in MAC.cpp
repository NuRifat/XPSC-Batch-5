#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    string s,str; cin >> s;
    str = s;
    reverse(str.begin(),str.end());
    string a(s), b(str + s);
    cout << (a < b ? a : b) << endl;
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
