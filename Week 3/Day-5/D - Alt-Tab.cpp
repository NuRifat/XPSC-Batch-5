#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin >> n;
	
	stack<string> st;
	for(int i=0;i<n;i++){
	    string s;
	    cin >> s;
	    st.push(s);
	}
	
	set<string> program;
	while(!st.empty()){
	    if(program.find(st.top()) == program.end()){
	        program.insert(st.top());
	        string name = st.top();
	        
	        if(name.size()>2){
	            cout << name.substr(name.size()-2);
	        }
	    }
	    st.pop();
	}
	
    return 0;
}
