#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >>q;

    ll LCM = a/__gcd(a,b)*b;

    ll cnt_lcm = n/LCM;
    ll cnt_a = (n/a)-cnt_lcm;
    ll cnt_b = (n/b)-cnt_lcm;

    if(p>q){
        cout << (cnt_a*p)+(cnt_b*q)+(cnt_lcm*p) << '\n';
    }
    else{
        cout << (cnt_a*p)+(cnt_b*q)+(cnt_lcm*q) << '\n';
    }

    return 0;
}
