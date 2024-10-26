#include <bits/stdc++.h>
using namespace std;
void solve_it(int a, int b, int c){
    int x = 1;
    while(true){
        if(a <= c*x && c*x <= b){
            cout << c*x << "\n";
            return;
        }
        else if(c*x>b){
            cout << -1 << "\n";
            return;
        }
        x++;
    }
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    solve_it(a,b,c);

    return 0;
}