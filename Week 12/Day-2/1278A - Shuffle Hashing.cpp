#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string p,h;
    cin >> p >> h;
    int len1 = p.size();
    int len2 = h.size();
    if(len2 <len1){
        cout << "NO\n";
        return ;
    }

    bool flag = false;
    sort(p.begin(),p.end());
    for(int i=0;i<=len2-len1;i++){
        string s = h.substr(i,len1);
        sort(s.begin(),s.end());
        if(s==p){
            flag = true;
            break;
        }
    }

    cout << (flag? "YES\n" : "NO\n");
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

