#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++) cin >> arr[i];

        ll mx = LLONG_MIN, sum = 0, cnt = 0;
        for(ll i=0;i<n;i++){
            sum += arr[i];
            mx = max(mx,arr[i]);
            if(sum-mx == mx) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}