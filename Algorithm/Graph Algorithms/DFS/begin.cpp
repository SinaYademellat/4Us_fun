#include <bits/stdc++.h>

#define pb push_back
#define REP(i,a,b) for(long long i=a ; i<b ;i++)

using namespace std;

const int MAXN = 1000;

typedef long long ll;
typedef vector<int> vi;


vi G[MAXN];
int MARK[MAXN];

void DFS(int v)
{
    if (MARK[v] == 0)
    {
        MARK[v] = 1;
        for (auto u : G[v])
            DFS(u);
    }
}


int main()
{
    int n, m;
    cin >> n >> m;
    REP(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int ans = 0;
    REP(i, 1, n + 1)
    {
        if (MARK[i] == 0)
        {
            ans++; DFS(i);
        }
    }
    cout << ans;

}

