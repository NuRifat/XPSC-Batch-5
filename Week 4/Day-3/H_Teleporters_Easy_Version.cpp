#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    ll n, c;
    cin >> n >> c;
    vector<ll> v;
    
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x+i+1);
    }
    sort(v.begin(), v.end());

    ll ans = 0;
    for(int i=0;i<n;i++){

        if(c >= v[i]){
            c -= v[i];
            ans++;
        }
        else{
            break;
        }
    }
    cout<< ans << '\n';
  }

  return 0;
}