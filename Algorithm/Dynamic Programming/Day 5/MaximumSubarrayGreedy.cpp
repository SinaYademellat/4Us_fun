#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int out_=INT_MIN;
        int curSum=0;
        for (int i = 0; i < nums.size(); i++)
        {
            curSum+=nums[i];
            out_=max(out_,curSum);
            if (curSum<0)
            {
                curSum=0;
            }
        }
        
        return out_;
    }
};


int main(int argc, char const *argv[])
{
    vector<int>vi={5,4,-1,7,8};
    Solution A;
    cout<<A.maxSubArray(vi);
    return 0;
}
