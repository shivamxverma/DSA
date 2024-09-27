#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

void dfs(vector<vector<int>>& adj, vector<int>& vis, int start) {
    stack<int> stk;
    unordered_set<int> visited;

    stk.push(start);
    visited.insert(start);

    while (!stk.empty()) {
        int current = stk.top();
        stk.pop();
        cout << current << " ";

        for (int neighbor : adj[current]) {
            if (visited.find(neighbor) == visited.end()) {
                stk.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n + 1, -1);
    for(int i = 1; i <= n; i++){
        if(vis[i] == -1){
            dfs(adj, vis, i);
        }
    }
}

int main(){
    fastIO;
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}
