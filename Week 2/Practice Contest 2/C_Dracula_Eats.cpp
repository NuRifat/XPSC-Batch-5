#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        if(n>1){
            cnt = (n-2)/7 + 1;
        }

        cout << cnt << '\n';
    }
    
    return 0;
}