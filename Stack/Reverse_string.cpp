#include <bits/stdc++.h>
using namespace std;
int main()
{   
    stack<char> Name;
    string name;cin>>name;
    string ans = "";
    for (char c : name)
    {
        Name.push(c);
    }
    for (char c : name)
    {
        char ch = Name.top();
        ans.push_back(ch);
        Name.pop();
    }
    cout<<ans;
    return 0;
}