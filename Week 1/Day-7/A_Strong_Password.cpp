#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        string result;
        bool flag = false;

        for (int i = 0; i < s.size(); i++) {
            result += s[i];
            char f = 'a';
            char c = s[i]+1;
            if (s[i] == s[i + 1] && !flag) {
                if(s[i]=='z') result += f;
                else result += c;
                flag = true;  
            }
            else if(s[i+1]=='\0' && !flag){
                if(s[i]=='z') result += f;
                else result += c;
                flag = true;
            }
        }
        cout << result << endl;
    }
    
    return 0;
}
