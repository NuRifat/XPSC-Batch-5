#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    bool a[26];
    memset(a,false,sizeof(a));
    for(char c:s){
        a[c-'a'] = true;
    }
    for(int i=0;i<26;i++){
        if(a[i]==false){
            char b = 'a'+i;
            cout << b;
            return;
        }
    }
    cout << "None";
    return;
}

int main(){
    solve();
    return 0;
}