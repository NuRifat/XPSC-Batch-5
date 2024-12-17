#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k,sum=0; 
    cin >> n >> k;
    vector<ll> a(n+1),b(n+1);
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    ll mex = (n*(n+1)/2)-sum;

    a[n] = mex;
    if(k>n) {
        k = k%(n+1);
    }
    for(int i=0;i<=n;i++){ 
        
        b[(i+k)%(n+1)]=a[i];
    }
    for(int i=0;i<n;i++){
        cout << b[i] << " ";
    }
    cout << '\n';
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