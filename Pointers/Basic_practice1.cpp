#include<bits/stdc++.h>
using namespace std;
int main(){
    int j = 5;
    int *i=0;
    i = &j;
    cout<<i<<endl; // 0x61ff0c
    cout<<j<<endl; // 5
    cout<<*i<<endl; // 5
    cout<<&i<<endl; // 0x61ff08
    cout<<&j<<endl; // 0x61ff0c
    return 0;
}