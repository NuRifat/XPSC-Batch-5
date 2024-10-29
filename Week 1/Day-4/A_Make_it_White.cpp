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
        string s;
        cin >> s;
        int maxP = INT_MIN;
        int minP = INT_MAX;
        int i=0;
        for(char c:s){
            i++;
            if(c=='B'){
                maxP = max(maxP,i);
                minP = min(minP,i);
            }
        }
        
        cout << maxP-minP+1 << "\n";
    }
    
    return 0;
}
