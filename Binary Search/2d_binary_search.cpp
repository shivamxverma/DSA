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
vector<int> bs(vector<vector<int>> &Grid,int n,int m,int k){
    int low = 0,high = n*(1LL)*m-1;
    while(low<=high){
        int mid = low + (high-low) / 2;
        int tc = mid%m;
        int tr = mid/m;
        if(Grid[tr][tc] == k)return {tr,tc};
        if(Grid[tr][tc] < k){
           low = mid + 1;
        }
        else high = mid - 1;
    }
    return {-1,-1};
}
void solve(){
     int n,m,k;cin>>n>>m>>k;
     vector<vector<int>> v(n,vector<int>(m));
     rep(i,0,n)cin>>v[i];
     auto ans = bs(v,n,m,k);
     cout << ans[0] << " " << ans[1] <<"\n";
}
signed main(){
    fastIO;
    solve();
    return 0;
}