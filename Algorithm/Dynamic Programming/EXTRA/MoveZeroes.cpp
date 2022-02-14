#include <bits\stdc++.h>
using namespace std;
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int N = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i]!=0){swap(nums[i], nums[N++]);}
		}
	}
};
int main()
{
    vector<int>Vi={0,1,0,3,12};
    Solution A;
    for(auto u : Vi){cout<<u<<" , ";}cout<<endl;
    A.moveZeroes(Vi);
    for(auto u : Vi){cout<<u<<" , ";}cout<<endl;
    return 0;
}
