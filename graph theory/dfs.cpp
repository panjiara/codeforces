#include <iostream>
 #include <vector>
using namespace std;
vector<int> adj[105];
bool visited [105];
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
    int nodes=7,edges,x,y;
    cin>>edges;
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
cout<<connected_component-1<<endl;



    return 0;
}
