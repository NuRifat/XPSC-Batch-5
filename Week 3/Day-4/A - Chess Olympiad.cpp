#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,z;
    cin >> x >> y >> z;
    int re = 4-(x+y+z);
    if(re+x>z) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}
