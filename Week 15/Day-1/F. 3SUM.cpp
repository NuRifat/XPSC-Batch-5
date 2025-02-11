#include <iostream>
#include <vector>

using namespace std;
bool isPossible(vector<int> &count) {
    for (int p = 0; p < 10; p++) {
        for (int q = p; q < 10; q++) {
            for (int r = q; r < 10; r++) {
                if ((p + q + r) % 10 != 3) continue;

                count[p]--; count[q]--; count[r]--;

                if (count[p] >= 0 && count[q] >= 0 && count[r] >= 0) {
                    return true;
                }

                count[p]++; count[q]++; count[r]++;
            }
        }
    }

    return false;
}

void solve() {
    int n;
    cin >> n;

    vector<int> count(10, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x % 10]++;
    }

    cout << (isPossible(count) ? "YES" : "NO") << endl;
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

