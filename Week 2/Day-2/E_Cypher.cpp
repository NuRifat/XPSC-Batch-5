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
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            while(a--){
                char c;
                cin >> c;
                if(c=='D'){
                    v[j]++;
                    v[j] = v[j]%10;
                }
                else{
                    v[j]--;
                    if(v[j]==-1) v[j] = 9;
                }
            }
        }
        for(int val : v){
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}