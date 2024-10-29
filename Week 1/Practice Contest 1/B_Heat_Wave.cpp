#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if(x>=y) cout << "NO" << '\n';
    else cout << "YES" << '\n';
    
    return 0;
}