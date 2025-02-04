#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map<int,int> d;
    while(n--){
        int l,r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }

    ll sum = 0, mx = -1;
    for(auto [key,val]:d){
        sum += val;
        mx = max(mx,sum);
    }
    cout << mx << '\n';

    return 0;
}