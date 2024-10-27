#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int z = 3;
    int b = a;
    while(b/10!=0){
        z--;
        b = b/10;
    }
    while(z--){
        cout << 0;
    }
    cout << a;

    return 0;
}