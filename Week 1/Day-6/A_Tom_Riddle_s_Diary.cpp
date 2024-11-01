#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    unordered_set<string> s; 
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        
        if (s.find(name) != s.end()) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
            s.insert(name);  
        }
    }
    
    return 0;
}
