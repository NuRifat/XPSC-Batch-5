#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    ll x; cin >> x;
    vector<ll> a(n);

    ll sum = 0;
    int l=0,cnt=0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
        while(sum>x){
            sum -= a[l++];
        }
        if(sum==x) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}

