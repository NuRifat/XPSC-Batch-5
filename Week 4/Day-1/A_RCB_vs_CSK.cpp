#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rcb, csk;
    cin >> rcb >> csk;
    int dif = rcb-csk;

    if(dif<18) cout << "CSK" << '\n';
    else cout << "RCB" << '\n';

    return 0;
}