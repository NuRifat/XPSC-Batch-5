#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<int> b(m), a(n);
    
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end());
    
    int x = 1, ind = 0, cnt = n - x;
    while (n - x > 0) {
        a[ind++] = b[cnt - 1];
        x++;
        cnt += n - x;
    }
    
    a[n - 1] = 1000000000;
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
