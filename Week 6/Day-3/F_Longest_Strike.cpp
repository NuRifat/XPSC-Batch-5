#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++) cin >> arr[i];

        sort(arr.begin(),arr.end());

        map<ll,ll> mp;
        for(ll i=0;i<n;i++) mp[arr[i]]++;
        ll L=-1,R=-1,l=-1,r;
        for(ll i=0;i<n;i++){
            if(mp[arr[i]]<k)continue;
            if(l==-1){
                l=arr[i];
            }
            if(i==n-1 or arr[i+1]-arr[i]>1 or mp[arr[i+1]]<k){
                r=arr[i];
                if(r-l>=R-L){
                    R=r;
                    L=l;
                }
                l=-1,r=-1;
            }
        }
        if(L==-1) cout << -1 <<'\n';
        else cout << L << " " << R << '\n';
    }
    return 0;
}