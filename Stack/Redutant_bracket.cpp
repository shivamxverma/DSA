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
bool solve(stack<int> &st, string s)
{
    for (int i = 0; i < s.length(); i++)
    {   char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            st.push(s[i]);
        }
        else
        {   
            if(ch==')')
            {
            bool ans = true;
            while (st.top() != '(')
            {   char top = st.top();
                if (top == '+' || top == '-' || top == '/' || top == '*')
                    ans = false;
                    st.pop();
            }
            if(ans==true)return true; 
            st.pop();
            }
        }
    }
    return false;
}
signed main()
{
    fastIO;
    string s;
    cin >> s;
    stack<int> st;
    if (solve(st, s)==false)
        printno else printyes return 0;
}