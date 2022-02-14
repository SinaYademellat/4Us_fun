#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
	{
        int si=nums.size();
		if (si==1 || k==0)
		{
			return;
		}
		else
		{
			vector<int>tmp_(si);
			for (int i = 0; i < si; i++)
			{
				tmp_[(i + k) %si] = nums[i];
			}
			nums = tmp_;
		}
		
    }
};

int main()
{
    vector<int>test_={1,2,3,4,5,6,7};
    Solution A;
    int k=3;
    A.rotate(test_,k);
    for(auto u : test_){cout<<u<<" , ";}
    return 0;
}
