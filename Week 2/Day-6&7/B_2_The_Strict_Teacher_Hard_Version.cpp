#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long n, m, q;
        cin >> n >> m >> q;
        vector<long> teachers(m);
        for (int i = 0; i < m; i++) {
            cin >> teachers[i];
        }
        sort(teachers.begin(), teachers.end());
        while (q--) {
            long david;
            cin >> david;
            long pos = upper_bound(teachers.begin(), teachers.end(), david) - teachers.begin();
            long min_moves = 0;
            if (pos == 0) {
                min_moves = teachers[0] - 1;
            }
            else if (pos == m) {
                min_moves = n - teachers.back();
            }
            else {
                min_moves = (teachers[pos] - teachers[pos-1])/2;
            }
            cout << min_moves << endl;
        }
    }

    return 0;
}
