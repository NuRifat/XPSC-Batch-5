#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> capital, small;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B') capital.push(i);
            if(s[i]>='a' && s[i]<='z' && s[i]!='b') small.push(i);
            if(s[i]=='B' && !capital.empty()){
                s[capital.top()] = '1';
                capital.pop();
            }
            if(s[i]=='b' && !small.empty()){
                s[small.top()] = '1';
                small.pop();
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!='B' & s[i]!='b' & s[i]!='1'){
                cout << s[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}