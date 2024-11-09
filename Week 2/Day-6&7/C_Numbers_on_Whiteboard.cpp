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
        priority_queue<int> pq;
        for (int i = n; i >= 1; i--) {
            pq.push(i);
        }
        cout << "2\n";
        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            cout << a << " " << b << endl;
            int c = (a + b + 1) / 2;  
            pq.push(c);
        }
    }

    return 0;
}
