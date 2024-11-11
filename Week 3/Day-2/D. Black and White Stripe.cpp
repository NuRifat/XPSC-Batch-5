#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;


    int l=0,r=0,cnt=0,res=INT_MAX;
    while(r<n){
        if(s[r]=='W') cnt++;
        if(r-l+1==k){
            res = min(res,cnt);
            if(s[l]=='W') cnt--;
            l++;
        }
        r++;
    }
    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}
