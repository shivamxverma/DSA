#include <iostream>
#include <vector>
#include <climits>
using namespace std;

#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int solve(int n, vector<int> &dp)
{
    if (dp[n] != INT_MAX) return dp[n];
    if (n <= 9) {
        return 1;
    }
    int x = n;
    while (x > 0)
    {
        int digit = x % 10;
        if (digit != 0)
        {
            int sol = solve(n - digit, dp) + 1;
            dp[n] = min(dp[n], sol);
        }
        x /= 10;
    }
    return dp[n];
}

signed main()
{
    fastIO;
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    cout << solve(n, dp);
    return 0;
}
