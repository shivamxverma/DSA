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
bool Radhe(vector<int> &v, int n, int k,vector<vector<bool>> &dp)
{
    if (k == 0)
        return false;
    if (n == 0)
        return v[0] == k;
    if(dp[n][k]!= false)return true;
    bool nt = Radhe(v, n - 1, k,dp);
    bool t = false;
    if (v[n] <= k)
        t = Radhe(v, n - 1, k - v[n],dp);
    return dp[n][k] = (t || nt);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vl v(n);
    cin >> v;
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    Radhe(v, n - 1, k,dp);
    if (Radhe(v, n - 1, k,dp))
        printyes else printno;
}
signed main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}