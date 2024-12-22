#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int a = count(s.begin(),s.end(),'A');
    int b = count(s.begin(),s.end(),'B');
    int c = count(s.begin(),s.end(),'C');
    int d = count(s.begin(),s.end(),'D');
    a = min(a,n);
    b = min(b,n);
    c = min(c,n);
    d = min(d,n);
    cout << a+b+c+d << '\n';
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