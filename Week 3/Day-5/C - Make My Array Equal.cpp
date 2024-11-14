#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for(ll i=0;i<n;i++){
        cin >> vec[i];
    }
    
    map<ll,ll> mp;
    int cnt = 0;
    for(auto it:vec){
        if(it!=0 && mp.find(it)==mp.end()){
            mp[it]++;
            cnt++;
        }
    }
    if(cnt<=1) cout << "YES" << '\n';
    else cout << "NO" <<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
