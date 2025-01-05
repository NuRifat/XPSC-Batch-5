#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >>n;
   vector<int> pref(n+1);
   pref[0]=0;
   for(int i=1;i<=n;i++){
        int x; cin >> x;
        pref[i] = pref[i-1]+x;
   }
   int m; cin >>m;
   while(m--){
        int q; cin >> q;
        auto it = lower_bound(pref.begin(),pref.end(),q);
        cout << it-pref.begin() <<'\n';
   }

   return 0;
}
