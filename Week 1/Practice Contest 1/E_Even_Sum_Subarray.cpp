#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int max_len = 0;

        // Check the sum of all possible subarrays
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += v[j]; 
                if (sum % 2 == 0) {
                    max_len = max(max_len, j - i + 1);
                }
            }
        }
        
        cout << max_len << '\n';
    }

    return 0;
}
