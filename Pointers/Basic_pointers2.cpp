#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*int n;
    cin >> n;
    int a = n;
    a++; 
    cout<<"a "<<a<<endl;
    cout<<n<<" "<<a<<endl;
    */
    int n;
    cin >> n;
    cout<<n<<endl;
    int *p = &n;
    (*p)++;
    cout<<n<<endl;
    
    //coping a pointer 

    int *q = p;
    (*q)++;
    // (*q) = (*q) + 1;
    // q = q +1 increases by 4
    cout<<n<<endl;
    cout<<*q<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    return 0;
}