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
template <class T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &vi : v)
    {
        in >> vi;
    }
    return in;
}
void solve()
{
    int n, sum;
    cin >> n >> sum;
    vl v(n+1);
    v[0] = 0;
    for(int i = 1 ; i<n ; i++){
        cin>>v[i];
    }
    int s = 0;
    int maxi = 0;
    int l = 1, r = 1;
    vector<int> pre(n+1,0);
    rep(i,0,n){
        pre[i+1] = pre[i] + v[i+1];
    }
    while (r < n)
    {

        s += v[r];

        if (s < 0)
        {
            s -= v[l];
            l++;
        }
        if (s <= sum)
            {
                maxi = max((pre[r] - pre[l-1]), maxi);
            }
        r++;
    }
    cout << maxi << "\n";
}
signed main()
{
    fastIO;
    solve();
    return 0;
}