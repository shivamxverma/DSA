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
int solve(int x, vector<int> &coins, int i)
{
    if (x == 0)
    {
        return 1;
    }
    int pick = 0;
    if (x >= coins[i]){
       pick = solve(x-coins[i], coins,i);
    }
    int notpick = solve(x, coins,i+1);
    return pick + notpick;
}
signed main()
{
    fastIO;
    int n, sum;
    cin >> n >> sum;
    vl v(n);
    cin >> v;
    cout << solve(sum, v, 0);
    return 0;
}
