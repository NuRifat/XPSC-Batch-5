#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int n = s.size();
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    int odd = 0;
    for(auto [ch,cnt]:mp){
        if(cnt%2!=0) odd++;
        if(odd>1){
            cout << "NO SOLUTION\n";
            return 0;
        }
    }

    string first, middle, last;
    for(auto [ch,cnt]:mp){
        if(cnt%2!=0){
            for(int i=1;i<=cnt;i++){
                middle.push_back(ch);
            }
        }
        else{
            for(int i=1;i<=cnt/2;i++){
                first.push_back(ch);
                last.push_back(ch);
            }
        }
    }
    reverse(last.begin(),last.end());

    string ans = first+middle+last;
    cout << ans << '\n';

    return 0;
}
