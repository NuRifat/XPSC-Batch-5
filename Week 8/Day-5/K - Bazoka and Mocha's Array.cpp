#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<int> v1,v2;
    v1.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(v1[i-1]<=a[i]) v1.push_back(a[i]);
        else break;
    }

    for(int i=v1.size();i<n;i++)
        v2.push_back(a[i]);
    for(int i=0;i<v1.size();i++)
        v2.push_back(v1[i]);

    if(is_sorted(v2.begin(),v2.end())) cout << "YES\n";
    else cout << "NO\n";
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
