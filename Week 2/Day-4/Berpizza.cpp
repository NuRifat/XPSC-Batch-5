#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    int cnt = 1;
    vector<int> v;
    while(q--){
        int a;
        cin >> a;
        if(a==1){
            int money;
            cin >> money;
            s.insert({cnt,money});
            ml.insert({money,-cnt});
            cnt++;
        }
        else if(a==2){
            int pos = s.begin()->first, money = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else{
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            v.push_back(pos);
            s.erase({pos,money});
            ml.erase(--ml.end());
        }
    }
    for(int val:v){
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}
