#include <bits\stdc++.h>
//find the contiguous subarray (containing at least one number) which has the largest sum and return its sum
//1 <= nums.length <= 10^5
//-10^4 <= nums[i] <= 10^4
using namespace std;
// nums = [-2,1,-3,4,-1,2,1,-5,4] ==> 6
// nums = [5,4,-1,7,8]  ==> 23
class Solution {
    int dp[100003];
public:
    int maxSubArray(vector<int>& nums)
    {
        int si= nums.size();
        if (si==1){return nums[0];}
        int out_=nums[0];
        dp[0]=nums[0];
        for (int i = 1; i < si; i++)
        {
            dp[i]=max(nums[i]+dp[i-1],nums[i]);
            out_=max(out_,dp[i]);
        }
        for (int i = 0; i < si; i++) {cout<<dp[i]<<" , ";}cout<<endl;
        return out_;
    }
};

int main()
{
    vector<int>vi={-1,-2};//={5,4,-1,7,8};
    Solution A;
    cout<<A.maxSubArray(vi);
    return 0;
}
