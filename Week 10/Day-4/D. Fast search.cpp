#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,k; cin >> n;
   vector<ll> a(n);
   for(int i=0;i<n;i++){
        cin >> a[i];
   }
   sort(a.begin(),a.end());
   cin >> k;
   while(k--){
        ll l, r;
        cin >> l >> r;
        auto it_l = lower_bound(a.begin(),a.end(),l);
        auto it_r = upper_bound(a.begin(),a.end(),r);

        cout << it_r-it_l << " ";
   }

   return 0;
}

