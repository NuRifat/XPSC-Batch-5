#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> v(n),a(n);
    for(int i=0;i<n;i++) cin >> v[i];

    a[0]=abs(v[0]-v[1]);
    for(int i=1;i<n-1;i++){
        a[i] = max(abs(v[i]-v[i+1]),abs(v[i]-v[i-1]));
    }
    a[n-1] = abs(v[n-2]-v[n-1]);
    sort(a.begin(),a.end());

    cout << a[0] << '\n';
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

