//You must write an algorithm with O(log n) runtime complexity.
//hen return its index. Otherwise, return -1.

#include <bits\stdc++.h>
using namespace std;

// [-1,0,3,5,9,12], target = 9 ==>4
// [-1,0,3,5,9,12], target = 2 =>-1

// 1<= nums.length <= 10^4
// -10^4 < nums[i], target < 10^4
// All the integers in nums are unique.
// nums is sorted in ascending order.


class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start=0,end=nums.size()-1;
        while (true)
        {
            int min=(start+end)/2;
            if (end-start<=1)
            {
                if (nums[start]==target){return start;}
                else if(nums[end]==target){return end;}
                return -1;
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
    vector<int>vi={-1,0,3,5,9,12};
    cout<<A.search(vi,2);
    return 0;
}
