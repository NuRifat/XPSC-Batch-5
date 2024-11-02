#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string r = s;
        sort(r.begin(),r.end());
        r.erase(unique(r.begin(),r.end()),r.end());
        unordered_map<char,char> mp;
        int l = r.size();
        for(int i=0;i<l;i++){
            mp[r[i]] = r[l-i-1];
        }
        string word = s;
        for(int i=0;i<n;i++){
            word[i] = mp[s[i]];
        }
        cout << word << endl;
    }
    
    return 0;
}
