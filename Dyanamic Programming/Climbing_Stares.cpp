#include <bits/stdc++.h>
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define int long long int
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define printyes cout << "YES\n";
#define printno cout << "NO\n";
#define space " "
#define R cout << "running" << endl;
using namespace std;
int ans = 0;
// int f(int n, vector<int> dp, vector<int> Health)
// {
//     if (n <= 3)
//     {
//         return n;
//     }
//     if (dp[n] > Health[n])
//         return dp[n];
//     return dp[n] = f(n - 1, dp, Health) + f(n - 2, dp, Health);
// }
// int f(int n,vector<int> dp){
//     if(n<=1){
//        return n;
//     }
//     dp[0]=0;dp[1]=1;dp[2]=2;dp[3]=3;
//     for(int i=4 ; i<=n ; i++){
//         dp[i] = dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

void solve()
{
    int n;
    cin >> n;
    // vector<int> dp(n+1, -1);
    // vector<int> health(n);
    // for(int i=0 ; i<n ; i++)
    // cin>>health[i];
    // cout<<f(n, dp,health);
    int prev = 1, curr = 1;
    for (int i = 2; i <= n; i++)
    {
        int xd = prev + curr;
        prev = curr;
        curr = xd;
    }
    cout << curr;
}
signed main()
{
    fastIO;
    solve();
    return 0;
}