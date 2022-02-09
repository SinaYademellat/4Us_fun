#include <bits\stdc++.h>

// All houses at this place are arranged in a circle
// .. it will automatically contact the police if two adjacent houses were broken into on the same night.
//return the maximum amount of money you can rob tonight without alerting the police.

//EX
//[2,3,2]   >> 3
//[1,2,3,1] >> 4
//[1,2,3]   >> 3

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 1000

using namespace std;

class Solution {
    int dp0[102],dp1[102];
       public:
       int rob(vector<int>& nums)
       {
           int s=nums.size();
           if(s==0) {return 0;}
           else if (s==1) {return nums[0];}
           else if (s==2){return max(nums[0],nums[1]); }
          
           dp0[0]=nums[0];
           dp0[1]=max(nums[0],nums[1]);
           for (int i = 2; i <s-1; i++)
           {
               dp0[i]=max(dp0[i-1],nums[i]+dp0[i-2]);
           }
           
           dp1[0]=nums[1];
           dp1[1]=max(nums[1],nums[2]);
           for (int i = 2; i+1 < s; i++)
           {
               dp1[i]=max(dp1[i-1],nums[i+1]+dp1[i-2]);
           }
   
           // for (int i = 0; i <= s; i++)
           // {
           //     cout<<dp0[i]<<" , ";
           // }
           // cout<<endl;        
           // for (int i = 0; i <= s; i++)
           // {
           //     cout<<dp1[i]<<" , ";
           // }
           // cout<<endl;
   
          return max(dp0[s-2],dp1[s-2]);
       }
   };
   

int main()
{
    Solution A;
    vector<int>vi={1,2,3,1};
    cout<<A.rob(vi);
    return 0;
}
