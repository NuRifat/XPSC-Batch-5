#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    ll x,a; cin >> x;

    ll sum = 0,cnt=0;
    map<ll,ll> freq;
    freq[0]=1;

    for(int i=0;i<n;i++){
        cin >> a;
        sum += a;
        cnt += freq[sum-x];
        freq[sum]++;

    }
    cout << cnt << '\n';
    return 0;
}


