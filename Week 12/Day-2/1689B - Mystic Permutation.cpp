#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    if(n==1){
        cout << -1 << '\n';
        return;
    }

    multiset<int> numbers;
    for(int i=1;i<=n;i++){
        numbers.insert(i);
    }

    vector<int> ans(n);
    for(int i=0;i<n;i++){
        auto smallest = numbers.begin();

        if(a[i]!=*smallest){
            ans[i]=*smallest;
            numbers.erase(smallest);
        }
        else{
            if(numbers.size()==1){
                ans[i]=*smallest;
                numbers.erase(smallest);
                swap(ans[i],ans[i-1]);
            }
            else{
                smallest++;
                ans[i]=*smallest;
                numbers.erase(smallest);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << '\n';

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
