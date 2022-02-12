#include <bits\stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n)
    {
        long long l=1,r=n,min=0,out_=0;
        while(l<=r)
        {
            min=(l+r)/2;
            if(isBadVersion(min)){out_=min; r=min-1;}
            else{l=min+1;}
        }
        return out_;
    }
};


int main()
{
    cout<<"SINA";
    return 0;
}
