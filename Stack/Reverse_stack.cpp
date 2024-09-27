#include<bits/stdc++.h>
using namespace std;
void InsertatBottom(stack<int> st,int k){
    if(st.empty()){
        st.push(k);
        return ;
    }
    int num = st.top();
    st.pop();
    InsertatBottom(st,k);
    st.push(num);
}
void reversestack(stack<int> &stack){
    if(stack.empty())return;
    int num = stack.top();
    stack.pop();
    reversestack(stack);
    InsertatBottom(stack,num);
}
int main(){
    int n;cin>>n;
    stack<int> st;
    for(int i=0 ; i<n ; i++) {
    int x;cin>>x;
    st.push(x);
    }
    int k;cin>>k;
    InsertatBottom(st,k);
    while(!(st.empty())){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}