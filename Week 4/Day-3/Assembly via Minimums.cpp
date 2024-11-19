#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int dif1 = abs(a-1);
        int dif2 = abs(c-1) + abs(b-c);
        if(dif1 < dif2) cout << 1 << '\n';
        else if(dif1 > dif2) cout << 2 << '\n';
        else cout << 3 << '\n';
    }

    return 0;
}