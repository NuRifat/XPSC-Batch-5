#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,i;
    cin >> n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    map<int,int> mp;
    for(i=n-1;i>=0;i--){
        if(mp[v[i]]>0) break;
        else mp[v[i]]++;
    }
    cout << i+1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
