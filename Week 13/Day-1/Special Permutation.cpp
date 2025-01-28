#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int x = (n / 2) - 1;
    if (a < b) {
        int leftRange = n - a - 1;
        int rightRange = b - 2;
        if (leftRange < x || rightRange < x) {
            cout << -1 << endl;
            return;
        }

        vector<int> left, right;
        left.push_back(a);
        right.push_back(b);

        int i = n, count = x;
        while (count > 0) {
            if (i != b) {
                left.push_back(i);
                count--;
            }
            i--;
        }

        count = x, i = 1;
        while (count > 0) {
            if (i != a) {
                right.push_back(i);
                count--;
            }
            i++;
        }
        for (int num : left) {
            cout << num << " ";
        }
        for (int num : right) {
            cout << num << " ";
        }
        cout << endl;

    }
    else if (a > b) {
        int leftRange = n - a;
        int rightRange = b - 1;
        if (leftRange < x || rightRange < x) {
            cout << -1 << endl;
            return;
        }

        vector<int> left, right;
        left.push_back(a);
        right.push_back(b);
        int i = n, count = x;
        while (count > 0) {
            if (i != b) {
                left.push_back(i);
                count--;
            }
            i--;
        }
        count = x, i = 1;
        while (count > 0) {
            if (i != a) {
                right.push_back(i);
                count--;
            }
            i++;
        }
        for (int num : left) {
            cout << num << " ";
        }
        for (int num : right) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >>t;
    while(t--){
        solve();
    }

    return 0;
}



