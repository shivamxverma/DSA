#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,a,b) for(int i=(a);i>=(b);i--)
#define printyes cout<<"YES\n";
#define printno cout<<"NO\n";
#define space " "
using namespace std;
const int N = 1e7+10;
#define int long long int
#define vl vector<int>
#define MOD 1000000007
#define INF LLONG_MAX
#define pii pair<int,int>
template <class T>
istream & operator>> (istream &in, vector<T> &v) {
    for (auto &vi : v) {
        in >> vi;
    }
    return in;
}
bool ispossible(int l,int w,int mid,int n){
    int ans = (mid/l)*(1ll)*(mid/w);
    return ans>=n;
}
int bs(int l,int w,int n){
    int low = 0,high = 1e9;
    while(low <= high){
        int mid = low + (high - low) /2 ;
        if(ispossible(l,w,mid,n)==true){
           high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
}
signed main(){
    fastIO;
    int a,b,n;cin>>a>>b>>n;
    cout << bs(a,b,n);
    return 0;
}