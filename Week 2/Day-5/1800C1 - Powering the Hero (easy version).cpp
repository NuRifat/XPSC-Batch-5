#include<bits/stdc++.h>
using namespace std;

void solver() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int i=0;i<n;i++){
        cin >> cards[i];
    }

    priority_queue<int> bonus;
    long long power = 0;

    for(int i=0;i<n;i++){
        if(cards[i]==0){
            if(!bonus.empty()){
                power += bonus.top();
                bonus.pop();
            }
        }
        else{
            bonus.push(cards[i]);
        }
    }

    cout << power << '\n';
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
