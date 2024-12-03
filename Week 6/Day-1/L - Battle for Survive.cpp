#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<int> a(n);
        ll sum = 0;
        for(ll i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        cout << sum-2*a[n-2] << '\n';
    }
    return 0;
}
