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
int bs(vector<int> &v, int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == x)
            return true;
        if (v[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
signed main()
{
    fastIO;
    int n, t;
    cin >> n >> t;
    vl v(n);
    cin >> v;
    while (t--)
    {
        int k;
        cin >> k;
        if(bs(v, n, k))printyes
        else printno
    }
    return 0;
}