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
int n = 100;
vector<vector<int>> g(101,vector<int>(101,0));
int delrow[] = {-1,0,+1,0};
int delcol[] = {0,+1,0,-1};
void dfs(int r,int c,int col,vector<vector<int>> &ans)
{
    int n = g.size();
    int m = g[0].size();
    for(int i = 0 ; i < 4 ; i++){
        int xx = r+delrow[i];
        int yy = c+delcol[i];
        if(xx >= 0 && xx < n && yy>=0 && yy < m)
        dfs(xx,yy,c,ans);
    }
}
void solve()
{
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            cin>>g[i][j];
        }

    }
    vector<vector<int>> ans = g;
    int i,j,c;cin>>i>>j>>c;
    dfs(i,j,c,g);
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