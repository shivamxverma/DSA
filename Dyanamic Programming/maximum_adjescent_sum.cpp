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
int solve(int n, vector<int> &v)
{
    int prev = v[0];
    int prev2 = 0;
    for (int i = 1; i < n; i++)
    {
        int left = v[i];
        if(i>1)left += prev2;
        int right = prev;
        int curr = max(left, right);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}
signed main()
{
    int n;
    cin >> n;
    vl v(n);
    cin >> v;
    cout << solve(n, v) << "\n";
    return 0;
}