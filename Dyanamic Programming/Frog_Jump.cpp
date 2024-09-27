#include <bits/stdc++.h>
using namespace std;
int jump(int ind,vector<int> &health,vector<int> &dp)
{
    if (ind == 0)return 0;
    if (dp[ind] != -1)return dp[ind];
    int jumpTwo = INT_MAX;
    int jumpOne = jump(ind - 1, health, dp) + abs(health[ind] - health[ind - 1]);
    if (ind > 1)
        jumpTwo = jump(ind - 2, health, dp) + abs(health[ind] - health[ind - 2]);
    return dp[ind] = min(jumpOne, jumpTwo);
}
int main()
{
    vector<int> height{30, 10, 60, 10, 60, 50};
    int n = height.size();
    vector<int> dp(n, -1);
    cout << jump(n - 1, height, dp);
    return 0;
}