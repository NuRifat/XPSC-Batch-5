#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x;
ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << n/2 << '\n';
    }
    return 0;
}