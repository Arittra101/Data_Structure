
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<lli>graph[100];  //graph meanse 100 nodes/nodes and each noce can use as a vector;
                        //ekta array[i] use hbe vector hisebe
lli i,j;
lli visited[100];

void bfs(lli s)
{
    queue<lli>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty())
    {
        lli x = q.front();
        cout<<x<<" ";
        q.pop();
        for(i=0;i<graph[x].size();i++)
        {
            if(visited[graph[x][i]]!=1)
            {
                q.push(graph[x][i]);
                visited[graph[x][i]]=1;
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli node,edge;
    cin>>edge;
    for(i=0; i<edge; i++)
    {
        lli x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bfs(2);
    return 0;
}
