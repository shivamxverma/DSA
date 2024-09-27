#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define int long long int
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define printyes cout<<"YES\n";
#define printno cout<<"NO\n";
#define space " "
#define R cout<<"running"<<endl;
using namespace std;
const int mod = 1000000007;
const int N = 1e7+10;
void Left(vector<int> v[],int n){
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for(int i=0 ; i<n ; i++){
            int curr = v[i];
            while(st.top()==curr){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
            
    }
    for(auto value : ans){
        cout<<value<<" ";
    }
}
void solve(vector<int> v[],int n){
    Left(v,n);
}
signed main(){
    fastIO;
    int n;cin>>n;
    vector<int> v[n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++)
        cin>>v[i][j];
    }
    solve(v,n);
    return 0;
}