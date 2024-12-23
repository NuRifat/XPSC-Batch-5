#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,k; cin >> n >> k;

    vector<int> v(n);
    for(auto &x:v) cin >> x;

    vector<int> sorted_v = v;
    sort(sorted_v.begin(),sorted_v.end());

    map<int,set<int>> mp;
    for(int i=0;i<n;i++){
        mp[i%k].insert(v[i]);
    }
    
    map<int,int> mp2;
    for(int i=0;i<n;i++){
        auto &check = mp[i%k];
        if(check.find(sorted_v[i])==check.end()) mp2[i%k]++;
    }

    if(mp2.empty()){
        cout << 0 << '\n';
        return;
    }
    int cnt = 0;
    for(auto &x:mp2){
        if(x.second==1) cnt++;
        else cnt+=100;
    }

    if(cnt==2){
        cout << 1 <<'\n';
    }
    else{
        cout << -1 << '\n';
    }
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