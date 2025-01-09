#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll n,t; cin >> n >> t;
   vector<ll> a(n);
   for(ll i=0;i<n;i++){
        cin >> a[i];
   }

   // lamda funtion
   auto ok = [&](ll seconds){
       ll cnt = 0;
       for(ll i=0;i<n;i++){
            cnt += (seconds/a[i]);
            if(cnt >= t) return true;
       }

       return false;
   };

   // 2 pointers
   ll l=1,r=1e18,mid,ans;
   while(l<=r){
        mid = l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
   }

   cout << ans << '\n';


   return 0;
}
