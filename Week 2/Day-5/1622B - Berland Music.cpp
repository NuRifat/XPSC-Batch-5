#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        string s;
        cin >> s;
        int cnt = 0;
        set<pair<int,int>> s1;
        set<pair<int,int>> s2;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                s1.insert({v[i],i});
                cnt++;
            }
            else{
                s2.insert({v[i],i});
            }
        }
        for(auto [u,pos]:s1){
            v[pos] = n-cnt+1;
            cnt--;
        }
        int cnt2 = 1;
        for(auto [u,pos]:s2){
            v[pos] = cnt2++;

        }
        for(int val:v){
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}
