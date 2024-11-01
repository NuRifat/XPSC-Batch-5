#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    stack<string> st;
    while(n--){
        string s;
        cin >> s;
        st.push(s);
    }
    vector<string> v;
    unordered_set<string> un_set;
    while(!st.empty()){
        if(un_set.find(st.top())==un_set.end()){
            v.push_back(st.top());
            un_set.insert(st.top());
        }
        st.pop();
    }
    for (string word:v){
        cout << word << '\n';
    }
    
    return 0;
}