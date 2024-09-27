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
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> mask;
    mask.push(s[0]);
    rep(i, 1, n)
    {
        // char c = s[i];
        if ((s[i] - s[i - 1]) == 32)
        {
            mask.pop();
        }
        else
        {
            mask.push(s[i]);
        }
    }
    while (!(mask.empty()))
    {
        cout << mask.top();
        mask.pop();
    }
}
    signed main()
    {
        fastIO;
        solve();
        return 0;
    }