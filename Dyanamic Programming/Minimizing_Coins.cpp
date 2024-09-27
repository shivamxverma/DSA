#include <bits/stdc++.h>
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define repr(i, a, b) for (int i = (a); i >= (b); i--)
#define printyes cout << "YES\n";
#define printno cout << "NO\n";
#define space " "
using namespace std;
const int N = 1e7 + 10;
#define int long long int
#define vl vector<int>
#define MOD 1000000007
#define INF LLONG_MAX
#define pii pair<int, int>
template <class T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &vi : v)
    {
        in >> vi;
    }
    return in;
}
void solve(int n,int k,vector<int> &arr)
{
    vector<int> dp(k+1,1e9);
    dp[0] = 0;
    for(int i=1;i<=k;i++){
        for(int j = 0; j<n;j++){
            if(arr[j] <=i)
            dp[i] = min(dp[i],dp[i - arr[j]] + 1);
        }
    }
    cout << (dp[k] < 1e9 ? dp[k] : -1 )<<"\n";
}
signed main()
{
    fastIO;
    int n, k;
    cin >> n >> k;
    vl v(n);
    cin >> v;
    solve(n,k,v);
    return 0;
}