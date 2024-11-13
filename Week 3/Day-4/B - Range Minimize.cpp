#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());

        int range1 = A[n - 3] - A[0];
        int range2 = A[n - 1] - A[2];
        int range3 = A[n - 2] - A[1];

        cout << min({range1, range2, range3}) << endl;
    }

    return 0;
}

