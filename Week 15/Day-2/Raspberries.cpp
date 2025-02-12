#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int mn = 1e9;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int even_cnt = 0;
    for(int i=0;i<n;i++){
        int rem = a[i]%k;
        if(a[i]%2==0) even_cnt++;
        if(rem==0){
            cout << rem << '\n';
            return;
        }
        mn = min(mn,k-rem);
    }
    if(k==4){
        if(even_cnt>=2) mn=0;
        else if(even_cnt==1) mn=min(mn,1);
        else mn=min(mn,2);
    }
    cout << mn << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}



