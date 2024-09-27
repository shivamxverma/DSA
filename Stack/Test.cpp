#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define v64 vector<long long int>
typedef pair<int,int> pi;
const int m = 1000000007;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define foa(i,a,b) for (int i = a; i < b; i++)
#define fob(i,a,b) for (int i = a; i >0; i--)
vector<int > v;
void prime(int n)
{
        bool primes[n+1];
    fill(primes,primes + n+1,true);
     primes[0] = primes[1] = false;
    
     for (int i = 2; i <= n; i++) 
     {
        if (primes[i]) {
        for (int j = i*2; j <= n; j += i)
        primes[j] = false;
          v.pb(i);
      //   cout << i-1 <<" ";
        }

     }
}
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,k;
cin >>n>>k;
vector<int > v1;
int ct=0;
prime(n);
foa(i,0,v.size())
{
//   cout<<v[i]<<" ";
   v1.pb(v[i]+v[i+1]+1);
}
   // cout<<endl;
foa(i,0,v.size()-1)
{
   // cout<<v1[i]<<" ";
   if(isPrime(v1[i])==1 && v1[i]<=n)
   {
      // cout<<endl<<v1[i]<<" ";
      ct++;
   }
}
// cout<<endl;
// cout<<ct;
if(ct>=k)
{
   cout<<"YES"<<endl;
}
else{
   cout<<"NO"<<endl;
}
   

}