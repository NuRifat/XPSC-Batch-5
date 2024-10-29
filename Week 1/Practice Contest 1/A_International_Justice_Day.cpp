#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int pro, def;
    cin >> pro >> def;
    if(pro>=def) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
    return 0;
}