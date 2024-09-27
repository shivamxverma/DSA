#include <bits/stdc++.h>
using namespace std;
bool solve(string s, stack<char> &st)
{
    for (int i = 0; i < s.length(); i++)
    {   
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else return false;
            }
            else return false;
        }
        return st.empty();
    }
}
    int main()
    {
        string s;
        cin >> s;
        stack<char> st;
        if (solve(s, st))
            cout << "YES\n";
        else
            cout << "NO\n";
        return 0;
    }