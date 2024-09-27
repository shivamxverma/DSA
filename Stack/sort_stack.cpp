#include <bits/stdc++.h>
using namespace std;
void sort_(stack<int> &st, int num)
{   if(st.empty() || (!st.empty() && st.top() < num))
    {
    st.push(num);return;
    }
    int n = st.top();
    st.pop();
    sort_(st,num);
    st.push(n);
}
void solve(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int num = st.top();
    st.pop();
    solve(st);
    sort_(st, num);
}

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    solve(st);
    while(!(st.empty())){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}