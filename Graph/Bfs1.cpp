#include<bits/stdc++.h>
using namespace std;
void bfsOfGraph(int m,int n,vector<int> adj[]){
    int vis[n]={0};
    vis[0]=1;
    queue<int> q;
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        // bfs.push_back(node);
        cout<<node<<" ";
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    // return bfs;
}
int main(){
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0 ; i<m ; i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfsOfGraph(m,n,adj);
    // vector<int> ans = bfsOfGraph(m,n,adj);
    // for(auto it : ans){
    //     cout<<it<<" ";
    // }
}