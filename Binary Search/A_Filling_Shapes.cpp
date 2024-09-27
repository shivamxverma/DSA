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
int solve(int n)
{
    if(n%2==1)return 0;
    if (n == 0)
        return 1;
    int prev = 1,prev1 = 1;
    for (int i = 2; i <= n; i++)
    {
        int curr = 2 * solve(i-2);
        prev1 = prev;
        prev = curr;

    }
    return prev;
}
signed main()
{
    int n;
    cin >> n;
    cout << solve(n) << "\n";
    return 0;
}