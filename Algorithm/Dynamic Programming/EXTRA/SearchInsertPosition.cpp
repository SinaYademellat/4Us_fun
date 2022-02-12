#include <bits\stdc++.h>
//You must write an algorithm with O(log n) runtime complexity.

// 1 <= nums.length <= 10^4
// -10^4 <= nums[i] <= 10^4
// nums contains distinct values sorted in ascending order.
// -10^4 <= target <= 10^4
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start=0,end=nums.size()-1;
        while (true)
        {
            int min=(start+end)/2;
            if (end-start<=1)
            {
                if (nums[start]==target){return start;}
                else if(nums[end]==target){return end;}
                else if(nums[end]>target && nums[start]<target){ return start+1;}
                else if(nums[end]<target){return end+1;}
                else{return start;}
            }   
            
            if (nums[min]>target){ end=min;}
            else if(nums[min]==target){ return min;}
            else { start=min;}
        }

    }
};



int main()
{
    Solution A;
    vector<int>vi={1,3,5,6};
    int x=0;
    cout<<A.searchInsert(vi,x);
    return 0;
}
