#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n >> x;
    vector<int> vec;
    while(n--){
        int a;
        cin >> a;
        if(a!=x) vec.push_back(a);
    }
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
