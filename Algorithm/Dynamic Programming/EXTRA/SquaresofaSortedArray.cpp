#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
    vector<int> out_;
    for (int i = 0; i < nums.size(); i++)
    {
        out_.push_back(nums[i]*nums[i]);
    }
    sort(out_.begin(),out_.end());
    return out_;
    }
};

int main()
{
    vector<int> foo={-4,-1,0,3,10};
    Solution A;
    foo=A.sortedSquares(foo);
    for (auto u : foo){cout<<u<<" , ";}cout<<endl;
    return 0;
}
