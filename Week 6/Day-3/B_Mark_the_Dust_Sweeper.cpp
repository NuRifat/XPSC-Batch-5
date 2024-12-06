#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        reverse(arr.begin(),arr.end());

        while(!arr.empty() and arr.back()==0) arr.pop_back();

        if(arr.empty()){
            cout<< 0 << '\n';
            continue;
        }

        ll ans=0;
        reverse(arr.begin(),arr.end());
        n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]==0){
                ans++;
            }
            else{
                ans+=arr[i];
            }
        }
        cout<< ans << '\n';
    }
    return 0;
}