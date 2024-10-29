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
        int win = 0;
        for(int i=x-y+1;i<=x;i++){
            win += pow(2,i);
        }

        int los = 0;
        for(int i=1;i<=x-y;i++){
            los += pow(2,i);
        }


        cout << win - los << '\n';
    }
    
    return 0;
}