#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    string s = "aabb";
    int j = 0;
    for(int i=0;i<n;i++){
        cout << s[j];
        j++;
        if(j==4) j=0;
    }
    cout << endl;
    
    return 0;
}