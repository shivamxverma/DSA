#include <bits/stdc++.h>
using namespace std;
#define N 1e5
int fibo(int n,vector<int> &fibonaci)
{
    if (n <= 1)return n;
    if(fibonaci[n] != -1)return fibonaci[n];
    return fibonaci[n] =  fibo(n - 1,fibonaci) + fibo(n - 2,fibonaci);
}
int fibo1(int n,vector<int> & fibonaci){
    if(n<=1)return n;
    int prev1 = 0, prev2 = 1,ans;
    for(int i=2 ; i<=n ; i++){
        ans = prev1 + prev2;
        prev1 = prev2;
        prev2 = ans;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> fibonaci(n+1,-1);
    for(int i = 0; i < n; i++){
        cout << fibo1(i,fibonaci) << " ";
    }
    cout << "\n";
    cout << fixed << setprecision(10);
    cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}
signed main()
{
    solve();
    return 0;
}