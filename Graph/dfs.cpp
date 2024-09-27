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
void dfs(vector<vector<int>> &g, vector<int> &vis, int start)
{
    vis[start] = 1;
    // cout << start << " ";
    for (auto x : g[start])
    {
        if (vis[x] == -1)
        {
            dfs(g, vis, x);
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> v >> u;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> vis(n + 1, -1);
    int cnt = 0;
    for(int i=1 ; i<=n ; i++){
        if(vis[i]==-1){
            cnt++;
            dfs(g, vis, i);
        }
    }
    cout << cnt << endl;
}
signed main()
{
    fastIO;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}