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
int solve(int ind, int k, vector<int> &health)
{
    if (ind == 0)
        return 0;
    int prev = 0,prev1 = 0;
    for (int j = 1; j <= ind; j++)
    {
        int ans = INT_MAX;
        for (int i = 1; i <= k; i++)
        {
            if (j - i >= 0)
            {
                int x = solve(j - i, k, health) + abs(health[j] - health[j - i]);
                ans = min(ans, x);
            }
        }
        prev1 = prev;
        prev = ans;
    }
    return prev;
}
signed main()
{
    int n, k;
    cin >> n >> k;
    vl v(n);
    cin >> v;
    vector<int> dp(n, -1);
    cout << solve(n - 1, k, v);
    return 0;
}