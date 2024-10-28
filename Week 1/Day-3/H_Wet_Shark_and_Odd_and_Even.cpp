#include<bits/stdc++.h>
using namespace std;

long long solve(){
    int n;
    cin >> n;
    long long sum = 0;
    int small_odd = INT_MAX;
    while(n--){
        int a;
        cin >> a;
        sum += a;
        if(a%2!=0){
            small_odd = min(small_odd,a);
        }
    }
    if(sum%2==0){
        return sum;
    }
    else return sum-small_odd;

}

int main(){
    cout << solve();
    return 0;
}