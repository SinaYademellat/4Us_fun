#include <bits\stdc++.h>
using namespace std;
//nums = [2,3,-2,4] ==> 6
//nums = [-2,0,-1]  ==> 0 

// 1 <= nums.length <= 2 * 10^4
// -10 <= nums[i] <= 10
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int si=nums.size();
        int curMax=nums[0],curMin=nums[0];
        int out_=nums[0];
        for (int i = 1; i < si; i++)
        {
            if(nums[i]==0){curMax=curMin=1;}
            int tmp =curMax*nums[i];
            curMax=max({tmp,curMin*nums[i],nums[i]});
            out_=max(out_,curMax);
            curMin=min({tmp,curMin*nums[i],nums[i]});
            
        }
        return out_;
    }
};



int main()
{
    Solution A;
    vector<int>vi={2,3,-2,4};
    cout<<A.maxProduct(vi);
    return 0;
}