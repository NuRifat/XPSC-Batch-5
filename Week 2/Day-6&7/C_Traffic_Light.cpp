#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        char c;
        string s;
        cin >> n >> c;
        cin >> s;
        if (c == 'g') {
            cout << 0 << endl;
            continue;
        }

        vector<int> dis(n, n); 
        int pos_g = -1;
        for (int i = 2 * n - 1; i >= 0; --i) {
            int idx = i % n;
            if (s[idx] == 'g') {
                pos_g = i; 
            }
            if (pos_g != -1) {
                dis[idx] = pos_g - i;  
            }
        }
        
        int time = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                time = max(time, dis[i]);
            }
        }
        cout << time << endl;
    }

    return 0;
}
