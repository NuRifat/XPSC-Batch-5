#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >>t;
   while(t--){
       int n; cin >> n;
       vector<int> arr(n);
       for(int i=0;i<n;i++){
            cin >> arr[i];
       }
       int mx = 0;
        for (int i = 1; i < n; i++)
            mx = max (mx, arr[n - 1] - arr[i]);
        for (int i = 0; i < n - 1; i++)
            mx = max (mx, arr[i + 1] - arr[0]);
        for (int i = 0; i < n - 1; i++)
            mx = max (mx, arr[i] - arr[i + 1]);
        cout << mx << '\n';
   }

   return 0;
}


