#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> a(n),x,ans(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<q;i++){
        ll quries; cin >> quries;
        if(x.empty() || x.back()>quries){
            x.push_back(quries);
        }
    }

    for(int i=0;i<x.size();i++){
        for(int j=0;j<n;j++){
            if(a[j]%(1LL<<x[i])==0){
                a[j] += (1LL<<(x[i]-1));
            }
        }
    } 
    for(int i=0;i<n;i++){
        cout << a[i] << " " ;
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