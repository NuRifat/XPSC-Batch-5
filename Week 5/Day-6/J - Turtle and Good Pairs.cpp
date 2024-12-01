#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    vector<int> frq(26,0);
    for(auto c:s){
        frq[c-'a']++;
    }
    while(n!=0){
        for(int i=0;i<26;i++){
            if(frq[i]!=0){
                cout << (char)(i+'a');
                frq[i]--;
                n--;
            }
        }
    }
    cout << '\n';
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

