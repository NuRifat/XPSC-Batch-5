#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        string t;
        string ans;
        cin >> n >> t;
        int i = t.size()-1;
        while(i>=0){
            if(t[i]=='0'){
                int val = (t[i-2]-'0')*10 + (t[i-1]-'0');
                ans.push_back('a'+val-1);
                i -= 3;
            }
            else{
                int val = (t[i]-'0');
                ans.push_back('a'+val-1);
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans << '\n';

    }

    return 0;
}