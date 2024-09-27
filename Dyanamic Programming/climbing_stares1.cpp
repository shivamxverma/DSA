#include <bits/stdc++.h>
using namespace std;
#define N 1e5
int stares(int n, vector<int> &dp)
{
    if (n <= 3)
        return n;
    if (dp[n] != -1)
        return dp[n];
    int left = stares(n - 1, dp);
    int right = stares(n - 2, dp);
    return dp[n] = left + right;
}
int stares1(int n, vector<int> &dp)
{
    if (n == 0)
        return 1;
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << stares1(n, dp);
    cout << "\n";
    cout << fixed << setprecision(10);
    cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}
signed main()
{
    solve();
    return 0;
}