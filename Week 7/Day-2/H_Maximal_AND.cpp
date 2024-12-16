#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int B = 30;

void solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> bits(B+1);
    for(int i=0;i<n;i++){
        for(int j=B;j>=0;j--){
            if((a[i] >> j) & 1) bits[j]++;
        }
    }

    ll ans = 0;
    for(int i=B;i>=0;i--){
        if(bits[i]==n) ans += (1LL << i);
        else{
            int need = n - bits[i];
            if(k>=need){
                ans += (1LL << i);
                k -= need;
            }
        }
    }

    cout << ans << '\n';
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