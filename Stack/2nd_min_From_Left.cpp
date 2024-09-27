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
vector<int> Left(vector<int> &arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0 ; i--) {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
vector<int> Right(vector<int> &arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0; i<n ; i++) {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
signed main(){
    fastIO;
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    vector<int> ans1 = Left(v,n);
    for(auto value : ans1){
        cout<<value<<" ";
    }
    cout<<endl;
    vector<int> ans2 = Right(v,n);
    for(auto value : ans2){
        cout<<value<<" ";
    }
    return 0;
}