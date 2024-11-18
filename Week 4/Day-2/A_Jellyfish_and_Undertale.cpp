#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll a,b,n;
        cin >> a >> b >> n;
        ll sum = b;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x<a){
                sum += x;
            }
            else{
                sum += a-1;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}