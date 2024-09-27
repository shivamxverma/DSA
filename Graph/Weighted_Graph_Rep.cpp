#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Nodes: \n";
    cin>>n;
    int m;
    cout<<"Enter the number of edges: \n";
    cin>>m;

    int adj[n+1][m+1];
    
    for(int i=0 ; i<m ; i++){
        int u,v,w;cin>>u>>v>>w;
        adj[v][u]=w;
        adj[u][v]=w;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; i++){
            cout<<
        }
    }
}