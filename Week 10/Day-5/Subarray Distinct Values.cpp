#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,k;
   cin >> n >> k;
   vector<int> a(n);
   map<int,int> freq;
   for(int i=1;i<=n;i++){
        cin >> a[i];
   }
   ll ans = 0;
   int uniq = 0,r=0;
   for(int l=1;l<=n;l++){
        while(r<n && (freq[a[r+1]]>0 || uniq<k)){
            r++;
            freq[a[r]]++;
            if(freq[a[r]]==1) uniq++;
        }
        ans += (r-l+1);
        freq[a[l]]--;
        if(!freq[a[l]]) uniq--;
   }
   cout << ans << '\n';

   return 0;
}
