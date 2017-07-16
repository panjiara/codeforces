#include<bits/stdc++.h>
using namespace std;
 vector<int> adj[30001];
 bool visited[30001];
 int nodes,edges,target;
 void dfs(int s)
 {
    visited[s]=true;
   // cout<<"visted node is ->"<<s<<endl;
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==false)
        {
            dfs(adj[s][i]);
        }
    }
}
void initialize()
{
    for(int i=0;i<nodes;i++)
        visited[i]=false;
}
int main()
{
    cin>>nodes>>target;
    edges=nodes-1;
   for(int i=0;i<edges;i++)
    {
        int x;
        cin>>x;
        adj[i].push_back(x+i);

    }
    initialize();
    dfs(0);
    if(visited[target-1]==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



}
