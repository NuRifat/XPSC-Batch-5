#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        int dif = 100-x;
        int val = dif/10*10;
        cout << val << '\n';
    }
    
    return 0;
}