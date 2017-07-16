#include <iostream>
 #include <vector>
using namespace std;
vector<int> adj[10];
bool visited [10];
void dfs(int s )
{
    visited[s]=true;
    cout<<"visited node is  :  "<<s<<"->";
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]] == false)
        {
          dfs(adj[s][i])  ;
        }
    }
}
void initialize() {
    for(int i = 0;i < 10;++i)
     visited[i] = false;
}
int main()
{
    cout<<"enter the number of nodes and edges"<<endl;
    int nodes,edges,x,y;
    cin>>nodes;
    edges=nodes-1;
   // int connected_component=0;
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
            //cout<<"i am here"<<endl;
            dfs(i);
        }
    }
    int query;
    cin>>query;
    for(int i=0;i<query;i++)
    {
        int



    }




    return 0;
}

