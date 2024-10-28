#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    int s=0 , d=0;
    int i=0, j=n-1;
    int cnt = 0;
    while(i<=j){
        if(cnt%2==0){
            if(v[i]<v[j]) {
                s+=v[j];
                j--;
            }
            else{
                s+=v[i];
                i++;
            }
        }
        else{
            if(v[i]<v[j]) {
                d+=v[j];
                j--;
            }
            else{
                d+=v[i];
                i++;
            }
        }
        cnt++;
    }
    cout << s << " " << d << "\n";
    
    return 0;
}

