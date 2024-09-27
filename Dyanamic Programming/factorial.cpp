#include <bits/stdc++.h>
using namespace std;
#define N 1e5
int factorial(int n,vector<int> &fac)
{
    if (n <= 1)return n;
    if(fac[n] != -1)return fac[n];
    return fac[n] =  factorial(n - 1,fac) * n ;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> fac(n+1,-1);
    for(int i = 0; i < n; i++){
        cout << factorial(i,fac) << " ";
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