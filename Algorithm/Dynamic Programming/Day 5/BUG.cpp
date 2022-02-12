// ): MaximumSumCircularSubarray :(
#include <bits\stdc++.h>

/*
[1,-2,3,-2] ==> 3
[5,-3,5]   ==> 10
[-3,2,-3] ==> 2

n == nums.length
1<= n <= 3*10^4
-3*10^4 <= nums[i] <= 3* 10^4

*/

using namespace std;

class Solution {
    int dp[70009];
    bool mark[70009];//False
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int si = nums.size();
        int lsi=si;
        if(si==1){return nums[0];}
        for (int i =0;i<si;i++){nums.push_back(nums[i]);}
        si*=2;

        for (int i =0;i<si;i++){cout<<nums[i]<<" , ";}cout<<endl;

        int maxSum = nums[0];
        dp[0]=nums[0];
        mark[0]=1;
        for (int i = 1;i<si;i++)
        {
            if (mark[i%lsi] == 1)
            {
                cout<<"i->"<<i<<endl;
                if (dp[i-1]+nums[i]-dp[(i%lsi)+1]>nums[i])
                {
                    cout<<"ii->"<<i<<endl;
                    memset(mark,1,i+1);
                    memset(mark,0,(i%lsi)+1);
                    dp[i]=dp[i-1]+nums[i]-dp[(i%lsi)+1];
                    maxSum=max(maxSum,dp[i]);
                }
                else
                {
                    cout<<"ei->"<<i<<"dp[(i '%' lsi)+1]-> "<<dp[(i%lsi)+1]<<endl;
                    memset(mark,0,i+1);
                    dp[i]=nums[i];
                    maxSum=max(maxSum,dp[i]);
                }
            }
            else if( (dp[i-1]+nums[i]) > nums[i])
            {
                //memset(mark,1,i+1);
                mark[i]=1;
                dp[i]=dp[i-1]+nums[i];
                maxSum=max(maxSum,dp[i]);
            }
            else
            {
                memset(mark,0,i+1);
                mark[i]=1;
                dp[i]=nums[i];
                maxSum=max(maxSum,dp[i]);
            }

        }
       for (int i = 0; i <si; i++){cout<<dp[i]<<" , ";}cout<<endl;
        return maxSum;
    }
};



int main()
{
    // cout<<"SINA";
    vector<int>foo={5,5,0,-5,3,-3,2};//{-3,2,-3};//{1,-6,-7,4};//={5,-3,5};
    Solution A;
    cout<<A.maxSubarraySumCircular(foo);
    // bool a[10];
    // bitset<10>b;
    // for(bool u : a){cout<<u<<" , ";};cout<<endl;
    // memset(a,-1,5);
    // for(bool u : a){cout<<u<<" , ";};cout<<endl;
    return 0;
}
