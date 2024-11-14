#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,h;
    cin >> n >> m >> h;
    
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    
    long long sum=0;
    for(int i=0;i<min(n,m);i++){
        sum += min(1ll*b[i]*h,1ll*a[i]);
    }
    
    cout << sum << '\n';
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