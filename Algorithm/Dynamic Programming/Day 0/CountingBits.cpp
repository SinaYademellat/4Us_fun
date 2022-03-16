#include <bits\stdc++.h>
using namespace  std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1);
        dp[0]=0;
        for (int i = 1 ; i<=n ; i++ )
        {
            dp[i]=dp[i/2]+(i%2);
        }
        return dp;
    }
};

int main()
{
    Solution A;
    int n=9;
    vector<int>test_=A.countBits(n);
    for (int i = 0; i <test_.size(); i++)
    {
        cout<<i<<" -->"<<test_[i] <<" , "<<__builtin_popcount(i)<<endl;
    }
    return 0;
}
