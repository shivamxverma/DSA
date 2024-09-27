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
void solve(){
     int n,k;cin>>n>>k;
     vl v(n);
     cin>>v;
     int lsum = 0,rsum = 0;
     rep(i,0,k){
         lsum += v[i];
     }
     int maxi = lsum;
     int sum = lsum;
     int j = n-1,i=k-1;
     while(j>(n-k+1) && j>=0){
         sum -= v[i];
         i--;
         sum += v[j];
         j--;
         maxi = max(maxi,sum);
     }
     cout << maxi << endl;
}
signed main(){
    fastIO;
    solve();
    return 0;
}