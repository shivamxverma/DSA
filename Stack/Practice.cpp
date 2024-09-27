#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;cin>>name;
    stack<char> st;
    string ans = "";
    for(auto ch : name) {
        st.push(ch);
    }
    for(auto ch : name){
        char x = st.top();
        ans.push_back(x);
        st.pop();
    }
    cout<<ans;
    return 0;
}