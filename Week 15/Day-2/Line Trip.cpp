#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int mx = a[0];
    for(int i=1;i<n;i++){
        mx = max(mx,a[i]-a[i-1]);
    }
    int last_val = 2*(x-a[n-1]);
    mx = max(mx,last_val);

    cout << mx << '\n';
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




