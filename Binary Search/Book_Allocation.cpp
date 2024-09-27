#include <bits/stdc++.h>
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
int predicate(vector<int> &v,int mid){
   int n = v.size();
   int l = 1,xd = 0;
   rep(i,0,n){
    if((v[i] + xd)<=mid)xd += v[i];
    else l++,xd = v[i];
   }
   return l;
}
int solve(vector<int> &v,int n,int k)
{
    int low = *max_element(v.begin(),v.end()),high = accumulate(v.begin(),v.end(),0);
    while(low <= high){
        int mid =( low + high )/2;
        if(predicate(v,mid) > k){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return low ;
}
signed main()
{
    int n,k;
    cin >> n >> k;
    vl v(n);
    cin >> v;
    cout << solve(v,n,k);
    return 0;
}