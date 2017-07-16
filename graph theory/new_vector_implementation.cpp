#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> adj[10];
    cout<<"enter the number of nodes and edges"<<endl;
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
           cin>>x>>y;
           adj[x].push_back(y);
           adj[y].push_back(x);
    }
    for(int i=1;i<=nodes;i++)
    {
        cout<<"the nodes connected to :"<<i<<" are::";
        for(int j=0;j<adj[i].size();j++)
        {
            if(j==adj[i].size()-1)
                cout<<adj[i][j];
            else
                cout<<adj[i][j]<<"-->";
        }
       cout<<endl;


    }



    return 0;
}
