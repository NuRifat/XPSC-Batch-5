#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n;
    cin >> k >> n;
    ll sum = 0;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }    

    auto ok = [&](ll x){
        ll st = x*k;
        for(auto y:a){
            st -= min(x,y);
        }
        return st<= 0;
    };

    ll l=0,r=(sum/k)+100,mid;
    while(r>l+1){
        mid = l+(r-l)/2;
        if(ok(mid)){
            l=mid;
        }
        else{
            r=mid;
        }
    }

    cout << l;

    return 0;
}