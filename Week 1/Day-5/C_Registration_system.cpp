#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string,int> mp;
    vector<string> words;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        words.push_back(s);
    }
    
    for(int i=0;i<words.size();i++){
        int val = mp[words[i]]++;
        if(val==0){
            cout << "OK" << endl;
        }
        else{
            cout << words[i] << val  << endl;
        }
    }
    
    
    return 0;
}