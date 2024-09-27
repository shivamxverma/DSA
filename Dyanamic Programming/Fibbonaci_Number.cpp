#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define int long long int
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define printyes cout<<"YES\n";
#define printno cout<<"NO\n";
#define space " "
#define R cout<<"running"<<endl;
using namespace std;
// This solution using memoization

// int Fibbonaci(vector<int> Fibo,int n){
//     if(n<=1){
//        return n;
//     }
//     if(Fibo[n]!=-1){
//         return Fibo[n];
//     }
//     return Fibo[n] = Fibbonaci(Fibo,n-1) + Fibbonaci(Fibo,n-2);
// } 

// This solution using Tabulation Form 

// int Fibbonaci(vector<int> Fibo,int n){
//     if(n<=1){
//        return n;
//     }
//     Fibo[0]=0;Fibo[1]=1;
//     for(int i=2 ; i<=n ; i++){
//         Fibo[i] = Fibo[i-1]+Fibo[i-2];
//     }
//     return Fibo[n];
// } 
void solve(){
     int n;cin>>n;
    //  vector<int> Fibo(n+1,-1);
    //  cout<<Fibbonaci(Fibo,n);
    // The most optimal solution is without using array
    int prev = 0;
    int curr = 1;
    for(int i=2 ; i<=n ; i++){
        int xd = curr + prev;
        prev = curr;
        curr = xd;
    }
    cout<<curr;
}
signed main(){
    fastIO;
    solve();
    return 0;
}