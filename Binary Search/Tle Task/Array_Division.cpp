#include <bits/stdc++.h>
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;
#define int long long int
#define vl vector<int>
template <class T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &vi : v)
    {
        in >> vi;
    }
    return in;
}
int predicate(vector<int> &v, int mid){
    int l = 1,last = v[0];
    rep(i,1,v.size()){
        if((v[i] + last) <= mid){
           last += v[i];
        }
        else l++,last = v[i];
    }
    return l;
}
int solve(vector<int> &v, int k , int n)
{ 
    int high = 0;
    rep(i,0,n){
        high = high + v[i];
    }
    int low = *max_element(v.begin(), v.end());
    while(low <= high){
        int mid = low + (high - low) /2;
        if(predicate(v,mid) > k){
           low = mid + 1;
        }
        else high = mid - 1;
    }
    return low;
}
signed main()
{
    fastIO;
    int n,k;
    cin >> n >> k;
    vl v(n);
    cin >> v;
    cout << solve(v, k, n);
    return 0;
}