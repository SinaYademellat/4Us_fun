#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e+4;
typedef long long ll;
typedef vector<int> vi;

int n, m ;
class sina
{

private:
  
public:
    queue<int> Q; 
    int  MARK[MAXN], dis[MAXN];
    vector<int> G[MAXN];
    void BFS(int startNode)
    {
        Q.push(startNode);
        dis[startNode] = 0;
        while (!Q.empty())
        {
            int v = Q.front();
            Q.pop();
            for (auto u : G[v])
            {
                if (MARK[u] == 0)
                {
                    Q.push(u);
                    dis[u] = dis[v] + 1;
                    MARK[u] = 1;
                }
            }
            MARK[v] = 1;
           
        }

    }


};




int main()
{
    cin >> n >> m;
    sina A;
    for (int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        A.G[a].push_back(b);
        A.G[b].push_back(a);
    }
    int s = 0;
    A.BFS(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "<< " << i << " >> " << A.dis[i] << endl;
    }

    /*
    7 14
    5 6
    3 7
    4 3
    3 1
    1 2
    5 2
    3 2
    2 4
    5 4
    4 6
    7 6
    5 7
    6 3
    3 5    
    */



}