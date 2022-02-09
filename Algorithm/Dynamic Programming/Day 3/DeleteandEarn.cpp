#include <bits\stdc++.h>
//Pick any nums[i] and delete it to earn nums[i] points
//Return the maximum number of points you can earn by applying the above operation some number of times.

//1 <= nums.length <= 2 * 10^4
// 1 <= nums[i] <= 10^4
using namespace std;

//[3,4,2] ==> 6
//[2,2,3,3,3,4] ==>9

class Solution 
{
multiset<int>foo;
    
public:
    int deleteAndEarn(vector<int>& nums)
    {
        long long s=nums.size();
        if (s==1){return nums[0];}
        for (long long i = 0; i <s; i++)
        {
            foo.insert(nums[i]);
        }
        vector<int>Vi;
        for (long long  i = *foo.begin() ; i <= *foo.rbegin(); i++)
        {
            Vi.push_back( i * foo.count(i));
        }
        // for(auto x:Vi)
        //     cout<<x<<" ";
        // cout<<endl;

        long long sv=Vi.size();
        //vector<int>dp(sv+2);
        long long dp[20004];
        if (sv==1)
        {
            return Vi[0];
        }
        else
        {
            dp[0]=Vi[0];
            dp[1]=max(Vi[0],Vi[1]);
        }

        for (int i = 2; i < sv; i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+Vi[i]);
        }

        return dp[sv-1];    
    }
};




int main()
{
    Solution A;
    vector<int>vi={2,2,3,3,3,4};
    cout<<A.deleteAndEarn(vi);
    return 0;
}
