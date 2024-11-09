#include <bits/stdc++.h>
using namespace std;

const long long INF = 2e18+5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        multiset<int> ml;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ml.insert(a);
        }
        int cnt = 0;
        while (!ml.empty()) {
            int sml = *ml.begin();  
            cnt++;                          
            int j = sml;
            while (true) {
                auto it = ml.find(j);
                if (it == ml.end()) {   
                    break;
                }
                ml.erase(it);           
                j++;
            }
        }

        cout << cnt << endl;  
    }

    return 0;
}
