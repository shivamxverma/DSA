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
int solve(string s, stack<char> &st)
{
    if (s.length() % 2 == 1)
        return -1;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            char top = st.top();
            if (top == '{' && !st.empty())
            {
                st.pop();
            }
            else
                st.push(ch);
        }
    }
    int a = 0, b = 0;
    while (!st.empty())
    {
        char ch1 = st.top();
        if (ch1 == '{')
            a++;
        else
            b++;
        st.pop();
    }
    int ans = ((a + 1) / 2 + (b + 1) / 2);
    return ans;
}
signed main()
{
    fastIO;
    string s;
    stack<char> st;
    cin >> s;
    cout << solve(s, st);
    return 0;
}