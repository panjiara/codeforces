#include<bits/stdc++.h>
using namespace std;
vector <int> adj[10];
bool visited [10];
void dfs(int x )
{
    visited[x]=true;
    cout<<"visited node is  :  "<<x<<"->";
    for(int i=0;i<adj[x].size();i++)
    {
        if(visited[adj[x][i]] == false)
        {
          dfs(adj[x][i])  ;
        }
    }
}
void initialize() {
    for(int i = 0;i < 10;i++)
     visited[i] = false;
}
int main()
{
    cout<<"enter the number of nodes and edges"<<endl;
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    int connected_component=0;
    for(int i=0;i<edges;i++)
    {
           cin>>x>>y;
           adj[x].push_back(y);
           adj[y].push_back(x);
    }
    initialize();
    for(int i=1;i<=nodes;i++)
    {
        if(visited[i]==false)
        {
            cout<<"i am here"<<endl;
            dfs(i);
            connected_component++;
        }


    }
    cout<<endl;
cout<<connected_component<<endl;



    return 0;
}
