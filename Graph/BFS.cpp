#include <bits/stdc++.h>
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;
void bfs(vector<vector<int>> &graph, int start, vector<int> &vis)
{
    queue<int> q;
    q.push(start);
    vis[start] = 1;
    while (!q.empty())
    {
        int xd = q.front();
        q.pop();
        cout << xd << " ";
        for (auto x : graph[xd])
        {
            if (vis[x] == -1)
            {
                q.push(x);
                vis[x] = 1;
            }
        }
    }
    return;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> v >> u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n + 1, -1);
    //  for(int i= 1 ; i<=n ; i++){
    //     if(vis[i]!=-1){
    //         bfs(adj,i,vis);
    //     }
    //  }
    bfs(adj, 1, vis);
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