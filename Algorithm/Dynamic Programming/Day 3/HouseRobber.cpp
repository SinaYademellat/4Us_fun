#include <bits\stdc++.h>

//...it will automatically contact the police if two adjacent houses were broken into on the same night.
//Given an integer array nums representing the amount of money of each house,
//return the maximum amount of money you can rob tonight without alerting the police.

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 400

//EX:
//nums = [1,2,3,1]     ==> 4
//nums = [2,7,9,3,1]   ==> 12

using namespace std;

class Solution {
    int dp[402];
public:
    int rob(vector<int>& nums)
    {
        int si=nums.size();
        
        if (si==1)
            return nums[0];

        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        
        for (int i = 2; i <si; i++)
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);

        return dp[si-1];
    }
};


int main()
{
    Solution A;
    vector<int>vi={1,2,3,1};
    cout<<A.rob(vi);
    return 0;
}
