#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int val = min(x,y)%3;
        cout << val << '\n';
    }

    return 0;
}