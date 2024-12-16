#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll q; cin >> q;
    vector<ll> a;
    string s = "";
    bool ok = true;
    for(ll i=0;i<q;i++){
        ll x; cin >> x;
        if(a.empty()){
            a.push_back(x);
            s.push_back('1');
        }
        else{
            if(ok){
                if(x>=a.back()){
                    a.push_back(x);
                    s.push_back('1');
                }
                else{
                    if(x>a.front()){
                        s.push_back('0');
                    }
                    else{
                        ok = false;
                        a.push_back(x);
                        s.push_back('1');
                    }
                }
            }
            else{
                if(x<a.back()){
                    s.push_back('0');
                }
                else{
                    if(x>a.front()){
                        s.push_back('0');
                    }
                    else{
                        a.push_back(x);
                        s.push_back('1');
                    }
                }
            }
        }
    } 
    cout << s << '\n';
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