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
const int mod = 1000000007;
const int N = 1e7 + 10;
int solve(vector<int> M[],int n){
     stack<int> s;
     for(int i=0 ; i<n ; i++){
        s.push(i);
     }
    while(s.size()!=1){
        int a = s.top();s.pop();
        int b = s.top();s.pop();
        if(M[a][b]==1){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int ans = s.top();

    int ct=0;
    for(int i=0 ; i<n ; i++){
        if(M[ans][i]==0){
        ct++;
        }
    }
    if(ct!=n)return -1;
    int ct2=0;
    for(int i=0 ; i<n ; i++){
        if(M[i][ans]==1){
        ct2++;
        }
    }
    if(ct2!=n-1)return -1;
    return ans;
}
signed main()
{
    fastIO;
    int n;
    cin >> n;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    solve(v,n);
    return 0;
}