#include<bits/stdc++.h>
using namespace std;

void solver() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int mn = 1, mx = n;
    int i = 0, j = n - 1;
    int prev_i, prev_j;

    while(i < j){
        prev_i = i;
        prev_j = j;
        if (arr[i] == mn){
            i++;
            mn++;
        }
        else if (arr[i] == mx){
            i++;
            mx--;
        }
        if (arr[j] == mn){
            j--;
            mn++;
        }
        else if (arr[j] == mx){
            j--;
            mx--;
        }
        if (prev_i == i && prev_j == j){
            cout << i + 1 << " " << j + 1 << '\n';
            return;
        }
    }
    cout << -1 << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solver();
    }

    return 0;
}
