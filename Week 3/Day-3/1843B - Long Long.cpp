#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    bool flag = true;
    int cnt=0;
    long long sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x>0){
            flag = true;
            sum += x;
        }
        else if(x<0){
            if(flag){
                cnt++;
                flag = false;
            }
            sum -= x;
        }
    }
    cout << sum << " " << cnt << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
         solve();
    }
    return 0;
}
