#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    string s = "abcdefghijklmnopqrstuvwxyz";
    map<char,int> mp;
    for(int i=0;i<s.size();i++) mp[s[i]]=0;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        for(auto it : mp){
            if(it.second==v[i]){
                cout << it.first;
                mp[it.first]++;
                break;
            }
        }
    }
    cout << endl;
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
