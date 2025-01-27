#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll  n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >>t;
   while(t--){
       ll x; cin >> x;
       ll sr = sqrtl(x);
       if(sr*sr==x && isPrime(sr)) cout << "YES\n";
       else cout << "NO\n";

   }

   return 0;
}



