#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    
    while (n--) {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }
    
    vector<tuple<string, string, string>> v;
    while (m--) {
        string com, ip;
        cin >> com >> ip;
        ip.pop_back();  // Remove the trailing ';' from ip
        v.push_back({com, ip, mp[ip]});
    }
    
    for (auto [cmnd, ipadd, nm] : v) {
        cout << cmnd << " " << ipadd << "; #" << nm << '\n';
    }
    
    return 0;
}
