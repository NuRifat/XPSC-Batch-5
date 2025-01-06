#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
        ll n;
        cin >> n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        ll sum=0,cnt_one=0;
        for(auto x:a){
            sum+=x;
            if(x==1) cnt_one++;
        }
        if(sum>=cnt_one+n && n>1) cout << "YES\n";
        else cout << "NO\n";
   }

   return 0;
}

