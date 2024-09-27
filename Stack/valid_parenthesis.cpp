#include<bits/stdc++.h>
using namespace std;
bool isValid(char *s){
    int ct=0;
    int n = sizeof(s);
     for(int i=0 ; i<n ;i++){
         if(s[i]=='(' || s[i]=='{' || s[i]=='['){
             ct++;
         }
         else{
             ct--;
         }
     }
     return ct==0;
}
int main(){
    int n;cin>>n;
    char *s;
    for(int i=0 ; i<n ; i++)cin>>s[i];
    if(isValid(s)==true)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}