#include <bits\stdc++.h>
#define maxN 1000

using namespace std;

int dp[maxN];
int fibo(int N)
{
  if (dp[N]!=0 || N==0)
  {
    return dp[N];
  }
  else
  {
    for(int i=2;i<=N;i++)
          dp[i]=dp[i-1]+dp[i-2];
      return dp[N];
  }
  
}

int  main(int argc, const char** argv) 
{
  //dp[0]=0 ; BUT -->  global value  :)
  dp[1]=1;
  for (int i = 0; i <=20; i++)
  {
    cout<<fibo(i)<<" , ";
  }
  
  return 0;
}