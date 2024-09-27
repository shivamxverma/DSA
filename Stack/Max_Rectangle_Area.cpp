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
vector<int> nextSmallerElement(int arr[],int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallerElement(int arr[],int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangleArea(int heights[], int n)
{
    vector<int> next(n);
    next = nextSmallerElement(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = heights[i];

        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}
int solve()
{
    int n, m;
    int Matrix[n][m];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Matrix[i][j];
        }
    }
    int area = largestRectangleArea(Matrix[0], m);
    for (int i = 1; i < n; i++){
        for (int j = 0; j < m; j++)
        {   
            if(Matrix[i][j]!=0)
            Matrix[i][j] += Matrix[i-1][j];  
        }
        area = max(area,largestRectangleArea(Matrix[i],m));
    }
    return area;
}
signed main()
{
    fastIO;
    cout<<solve();
    return 0;
}