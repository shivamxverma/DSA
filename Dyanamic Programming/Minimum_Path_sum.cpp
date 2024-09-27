#include <bits/stdc++.h>
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;
const int N = 1e7 + 10;
#define int long long int
#define vl vector<int>
#define MOD 1000000007
int solve(int n, int m, vector<vector<int>> &Grid)
{
    if (n == 0 && m == 0)
        return Grid[0][0];
    if (n < 0 || m < 0)
        return INT_MAX;
    int left = 0, right = 0;
    left = Grid[n][m] + solve(n, m - 1, Grid);
    right = Grid[n][m] + solve(n - 1, m, Grid);
    return min(left, right);
}
signed main()
{
    fastIO;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> Grid;
    rep(i, 0, n)
    {
        vector<int> temp;
        rep(j, 0, m)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        Grid.push_back(temp);
    }
    cout << solve(n, m, Grid);
    return 0;
}