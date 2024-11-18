#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while(q--){
        ll a,b,n,s;
        cin >> a >> b >> n >> s;

        ll div = s/n;
        if(div<=a){
            if((div*n)+b<s) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
        else{
            if((a*n)+b<s) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
    }

    return 0;
}