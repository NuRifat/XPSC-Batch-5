#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int val = -1;
    bool flag = true;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        int a = x/10;
        int b = x%10;
        if(val<=a && a<=b) val = b;
        else if(val<=x) val = x;
        else flag = false;
    }
    flag ? cout << "YES\n" : cout << "NO\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
        solve();
   }

   return 0;
}



