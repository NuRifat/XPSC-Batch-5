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
        string arr[3][n];
        map<string,int> mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string word;
                cin >> word;
                arr[i][j] = word;
                mp[word]++;
            }
        }
        
        for(int i=0;i<3;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                if(mp[arr[i][j]]==3){
                    sum += 0;
                }
                else if(mp[arr[i][j]]==2) sum += 1;
                else if(mp[arr[i][j]]==1) sum += 3;
                
            }
            cout << sum << " ";
        }
        cout << '\n';
    }
    
    return 0;
}