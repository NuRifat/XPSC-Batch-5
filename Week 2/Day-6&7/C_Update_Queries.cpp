#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> pos_v(m);
        vector<char> v(m);
        for (int i = 0; i < m; ++i) {
            cin >> pos_v[i];
            pos_v[i]--; 
        }
        for (int i = 0; i < m; ++i) {
            cin >> v[i];
        }
        sort(pos_v.begin(), pos_v.end());
        sort(v.begin(), v.end());
        priority_queue<char, vector<char>, greater<char>> pq(v.begin(), v.end());

        vector<bool> vec(n, false);
        for (int i = 0; i < m; ++i) {
            int pos = pos_v[i];
            char newCh = pq.top();
            pq.pop();
            if (!vec[pos] || newCh < s[pos]) {
                s[pos] = newCh;
                vec[pos] = true;
            } else {
                pq.push(newCh);
            }
        }

        cout << s << endl;
    }

    return 0;
}
