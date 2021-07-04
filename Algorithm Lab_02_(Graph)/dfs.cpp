
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;
lli v[100][100];
vector<lli>graph[100];

lli visited[100];
lli activate[100];

void dfs(lli start)
{

    stack<lli>s;
    s.push(start);
    visited[start]=1;
    while(!s.empty())
    {
        lli x = s.top();
        cout<<x<<" ";
        s.pop();
        for(i=0; i<graph[x].size(); i++)
        {
            if(visited[graph[x][i]]==0)
            {
                s.push(graph[x][i]);
                visited[graph[x][i]]=1;
            }
        }

    }


}
void printVector(vector<lli>&v)
{
    for(auto it1 :  v)
        cout<<"->"<<it1;
    cout<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli edge;
    cin>>edge;
    set<lli>s;
    for(lli i=0; i<edge; i++)
    {
        lli x,y;
        cin>>x>>y;
        activate[x]=1;
        activate[y]=1;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    //dfs(10);


    for(i=0; i<100; i++)
    {
        if(activate[i]==1)
        {
            cout<<"Node "<<i<<" :";
             printVector(graph[i]);
        }

    }


    return 0;
}

