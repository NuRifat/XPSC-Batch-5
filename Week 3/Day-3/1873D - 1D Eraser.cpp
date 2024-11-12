#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int i=0,sum=0;
    while(i<n){
        if(s[i]=='B') {
            sum++;
            i += k;
        }
        else i++;
    }
    cout << sum << '\n';
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
