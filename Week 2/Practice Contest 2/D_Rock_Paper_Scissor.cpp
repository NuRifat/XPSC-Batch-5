#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string a,b;
        cin >> a >> b;

        int chef = 0;
        int chefina = 0;
        int drw = 0;
        for(int i=0;i<n;i++){
            if(a[i]=='R'){
                if(b[i]=='R') drw++;
                else if(b[i]=='P') chefina++;
                else chef++;
            }
            else if(a[i]=='P'){
                if(b[i]=='P') drw++;
                else if(b[i]=='S') chefina++;
                else chef++;
            }
            else if(a[i]=='S'){
                if(b[i]=='S') drw++;
                else if(b[i]=='R') chefina++;
                else chef++;
            }
        }
        if(chef==chefina) cout << 1 << '\n';
        else if(chef < chefina) cout << (n-drw)/2+1-chef << '\n';
        else cout << 0 << '\n';
    }
    
    return 0;
}