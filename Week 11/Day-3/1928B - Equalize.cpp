#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> s;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        s.insert(x);
    }
    vector<int> a(s.begin(),s.end());
    int l=0,r=l, mx=0;
    while(r<a.size()){
        if(a[r]-a[l]<n){
            r++;
            mx = max(mx,r-l);
        }
        else{
            l++;
            r = max(l,r);
        }
    }
    cout << mx << '\n';
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




