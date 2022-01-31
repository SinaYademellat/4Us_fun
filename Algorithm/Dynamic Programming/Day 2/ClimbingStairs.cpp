#include <bits\stdc++.h>

// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
    int dp[46];
    // dp[i] : how many distinct ways can
public:
    int climbStairs(int n)
    {
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;

        for (int i = 3; i <=n; i++)
        {         // n-2   OR   n-1
            dp[i] = dp[i-2] + dp[i-1];
        }
        

        return dp[n];
    }
};

int main()
{
    Solution A;
    std::cout<<A.climbStairs(5);
    return 0;
}
