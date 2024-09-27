#include <bits/stdc++.h>
using namespace std;
bool powerof2(int x){
    return x && !(x&(x-1));
}
int main(){
    int n;cin>>n;
    // if(n&1)cout<<"Even\n";
    // else cout<<"Odd\n";

    if(!(powerof2(n)))cout<<"Not Power of two\n";
    else cout<<"Power of two\n";
    return 0;
}