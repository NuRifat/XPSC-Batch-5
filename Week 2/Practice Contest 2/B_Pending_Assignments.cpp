#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;

        int total_min = x*y;
        int min = z*24*60;

        if(total_min>min) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    
    return 0;
}