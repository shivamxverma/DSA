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
int solve(int m, int n,vector<string> &Grid)
{
    vector<int> prev(m,0);
    for (int i = 0; i < m; i++)
    {
        vector<int> temp(n,0);
        for (int j = 0; j < n; j++)
        {
            if (i > 0 && j > 0 && Grid[i][j] == '*') {
                temp[j] = 0;
                continue;
            }
            if (i == 0 && j == 0)
            {
                temp[j] = 1;
                continue;
            }
            int left = 0,up = 0;
            if (j > 0)
            {
                left = temp[j - 1];
            }
            if (i > 0)
            {
                up = prev[j];
            }
            temp[j] = (up + left)%MOD;
        }
        prev = temp;
    }
    return prev[n-1];
}
signed main()
{
    fastIO;
    int n;
    cin >> n;
    vector<string> Grid;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        Grid.push_back(s);
    }
    cout << solve(n,n,Grid);
    return 0;
}