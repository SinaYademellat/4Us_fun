#include <bits\stdc++.h>

/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.
You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.

2 <= cost.length <= 1000
0 <= cost[i] <= 999
*/


using namespace std;



class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int sizeofcostvector=cost.size();
        if (sizeofcostvector==2)
        {
            return min(cost[0],cost[1]);
        }

        int dp[1000];
        dp[0]=cost[0];
        dp[1]=cost[1];

        for (int i = 2; i <sizeofcostvector; i++)
        {
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        
        // for (int i = 0; i < sizeofcostvector; i++)
        // {
        //    cout<<dp[i]<<" , ";
        // }
        // cout<<endl;
        
        return min(dp[sizeofcostvector-1],dp[sizeofcostvector-2]);
    }

};


int main()
{
    vector<int>foo={1,100,1,1,1,100,1,1,100,1};
    Solution A;
    cout<<A.minCostClimbingStairs(foo);



}
