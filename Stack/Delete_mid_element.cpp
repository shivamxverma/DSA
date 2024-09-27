#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int count,int size){
    if(count==size/2){
        st.pop();
        return ;
    }
    int num = st.top();
    st.pop();
    solve(st,count+1,size);
    st.push(num);
}
int main(){
    int n;cin>>n;
    stack<int> st,temp;
    for(int i=0; i<n ; i++){
        int x;cin>>x;
        st.push(x);
    }
    solve(st,0,st.size());
    while(!(st.empty())){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}