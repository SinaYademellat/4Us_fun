#include <bits\stdc++.h>
//Your goal is to reach the last index in the minimum number of jumps.
//You can assume that you can always reach the last index.
//nums = [2,3,1,1,4] ==>2
//nums = [2,3,0,1,4] ==>2
//1 <= nums.length <= 10^4
//0 <= nums[i] <= 1000

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int si=nums.size();
        vector<int>dp(si,1001);// the minimum number of jumps. 
        dp[0]=0;
        for (int i = 0; i <si; i++)
        {
            for (int j=1 ; j<=nums[i];j++)
            {
                if(i+j<si)
                    dp[i+j] = min(dp[i+j],dp[i]+1);
                else
                    break;
            }
        }

        // for (auto x:dp)
        //     cout<<x<<" , ";
        // cout<<endl;

        return dp[si-1];
    }
};


int main()
{
    vector<int>vi={2,3,0,1,4};//{2,3,1,1,4};
    Solution A;
    cout<<A.jump(vi);
    return 0;
}
