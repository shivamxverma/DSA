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
bool predicate(vector<int> &v,int mid,int k){
     int l = 1;
     int n = v.size();
     int last = v[0];
     rep(i,1,n){
        if((v[i] - last) >= mid){
           l++;
           last = v[i];
        }
     }
     return l>=k;
}
int solve(vector<int> &v,int k,int n)
{
    int low = 1;
    int high = v[n-1] - v[0];
    while(low <= high){
        int mid = (high + low)/2;
        bool check = predicate(v,mid,k);
        if(check == true){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return high;
}
signed main()
{
    int n,k;
    cin >> n >>k;
    vl v(n);
    cin >> v;
    sort(v.begin(),v.end());
    cout << solve(v,k,n);
    return 0;
}