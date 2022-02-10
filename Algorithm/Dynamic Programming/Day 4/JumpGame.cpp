#include <bits\stdc++.h>
//Return true if you can reach the last index, or false otherwise.
// nums = [2,3,1,1,4] ==> True
// nums = [3,2,1,0,4] ==> False
// 1 <= nums.length <= 10^4
// 0 <= nums[i]     <= 10^5
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums)
    {

        int s=nums.size();
        int lastindexisok=s-1;
        for (int i =s-2; i >=0 ; i--)
        {
            if(nums[i]+i>=lastindexisok)
                lastindexisok=i;
        }
        return lastindexisok==0;
        
        
    }
};

int main()
{
    vector<int>vi={13055,19141,12848,11888,1185,9905,3984,14772,18935,6844,9851,13695,17955,16359,14969,6200,13436,16940,13893,1639,3233,11861,13475,11963,8193,3413,10952,8585,13807,6320,4507,1743,454,7983,9677,8348,2496,4585,11022,9103,1096,6770,6745,4350,2334,13024,2738,9444,1028,5337,2446,272,5799,7397,15000,4848,16772,12860,11773,196,3187,14016,1314,1684,19858,2598,16111,10577,1643,12252,5835,2819,17898,18210,799,5010,19937,1285,9693,18155,484,9184,7212,3474,14630,18418,10108,1735,3940,2877,18007,14731,10133,10470,15396,7464,6936,261};//{2,3,1,1,4};
    Solution A;
    cout<<A.canJump(vi);
    return 0;
}
