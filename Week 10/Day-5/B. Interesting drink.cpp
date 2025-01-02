#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
        cin >> a[i];
   }
   sort(a.begin(),a.end());
   int q; cin >> q;
   while(q--){
        int m; cin >> m;
        auto it = upper_bound(a.begin(),a.end(),m);
        int pos = it-a.begin();
        cout << pos << '\n';
   }

   return 0;
}

