#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
        int n,k;
        cin >> n >> k;
        int order=1,cnt=0;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            if(x==order) order++;
            else cnt++;
        }
        cout << (cnt+k-1)/k << '\n';
   }

   return 0;
}

