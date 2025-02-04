#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,q;
    cin >> n >> k >> q;
    vector<int> d(200000+5);
    while(n--){
        int l,r ; cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }
    int cnt = 0;
    for(int i=1;i<=200000;i++){
        cnt += d[i];
        d[i] = (cnt>=k) ? 1:0;
    }
    for(int i=1;i<=200000;i++){
        d[i] = d[i-1]+d[i];
    }
    while(q--){
        int a,b; cin >> a >> b;
        cout << d[b]-d[a-1] << '\n';
    }

    return 0;
}