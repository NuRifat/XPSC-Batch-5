#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    vector<ll> even, odd;
    for(ll i=0;i<n;i++){
        ll x; cin >> x;
        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }
    if(even.size()==0 || odd.size()==0){
        cout << 0 << '\n';
        return;
    }
    else{
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
        if(odd[0]>even[0]){
            cout << even.size() << '\n';
            return;
        }
        else{
            ll mx = odd[0],ans = 0;
            for(ll i=even.size()-1;i>=0;i--){
                if(even[i]>mx){
                    cout << even.size()+1 << '\n';
                    return;
                }
                else{
                    ans++;
                    mx += even[i];
                }
            }
            cout << ans << '\n';
            return;
        }
    }
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
