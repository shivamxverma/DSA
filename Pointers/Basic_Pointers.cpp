#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n; // taking input n
    cout<<"n: " << n<<endl;
    cout<<&n<<endl;  // Address of n
    int *i  = &n; // i is Pointer to n and storing the address of n
    cout<<"Address of value n"<<i<<endl; // Address of value n
    cout<<&i<<endl; // Address of address of n
    cout<<*i<<endl; // value at address 
    cout<<&(*i)<<endl; // Address of value at address of n

    //* is a defreference operator
    // size of pointer to any data type always of 8 bits
    return 0;
}