#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> st, int k){
    if(st.empty()){
        st.push(k);
        return ;
    }
    int num = st.top();
    st.pop();
    solve(st,k);
    st.push(num);
} 
int main(){
    int n;cin>>n;
    stack<int> st;
    for(int i=0 ; i<n ; i++) {
       int x;cin>>x;
       st.push(x);
    }
    int k;cin>>k;
    solve(st,k);
    while(!(st.empty())){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}