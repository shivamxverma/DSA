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
int upper(vector<int> &v, int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] <= k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low + 1;
}
int lower(vector<int> &v,int n,int k){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(v[mid] <= k)low = mid + 1;
        else high = mid - 1;
    }
    return high+1;
} 
signed main()
{
    fastIO;
    int n;
    cin >> n;
    vl v(n);
    cin >> v;
    sort(v.begin(), v.end());
    int t;cin>>t;
    while (t--)
    {
        int l,r;cin>>l>>r;
        int left = lower(v,n,l);
        int right = upper(v,n,r);
        int ans =  right - left;
        if(l != v[lower(v,n,l) - 1])ans--;
        cout << ans << " ";
    }
    return 0;
}