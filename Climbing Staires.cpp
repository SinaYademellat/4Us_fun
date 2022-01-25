#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) {

    if (n < 3) {
        return n;
    }

    int twoBefore = 1;
    int oneBefore = 2;
    int result;

    for (int i = 3; i <= n; i++) {
        result = oneBefore + twoBefore;
        twoBefore = oneBefore;
        oneBefore = result;
    }

    return result;

}
int main()
{
   cout<<climbStairs(4);
}
