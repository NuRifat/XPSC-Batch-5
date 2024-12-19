#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    int zero = count(s.begin(),s.end(),'0');
    int one = s.size()-zero;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            if(one) one--;
            else break;
        }
        else{
            if(zero) zero--;
            else break;
        }
    }
    cout << one + zero << '\n';
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
