#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> s(k);
    for(ll i=0;i<k;i++){
        cin >> s[i];
    }
    if(k==1){
        return true;
    }
    for(ll i=k-1;i>1;i--){
        if(s[i]-s[i-1]<s[i-1]-s[i-2]){
            return false;
        }
    }
    ll dif = s[1]-s[0];
    if(dif*(n-k+1)<s[0]) return false;
    else return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        if(solve()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}