#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    string a; cin >> a;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0') cnt++;
    }
    int val = min(n-cnt,cnt);
    if(val==0){
        cout << "Ramos\n";
        return;
    }
    else{
        if(val%2==0){
            cout << "Ramos\n";
            return;
        }
        else{
            cout << "Zlatan\n";
            return;
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >>t;
    while(t--){
        solve();
    }

    return 0;
}
