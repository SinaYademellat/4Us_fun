//  << DFS >>
#include <bits\stdc++.h>
using namespace  std;
const int maxn=1e6;
int ans[maxn];
bool flag=false;
int A,B,MAX_STEP=0;
void dfs(int cur,int step)
{
    if(cur==B){flag=true;MAX_STEP=step;return;}
    if(cur>B){return;}
    ans[step]=cur*10+1;
    if(__cpp_inheriting_constructors<=2e8){dfs(cur*10+1,step+1);}
    if(flag==true){return;}
    ans[step]=cur*2;
    dfs(cur*2,step+1);
}

int main()
{
    cin>>A>>B;
    flag=false;
    dfs(A,1);
    if(flag==true)
    {
        cout<<"YES\n";
        cout<<MAX_STEP<<endl;
        cout<<A<<" ";
        for (int i = 1; i < MAX_STEP; i++)
        {
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

