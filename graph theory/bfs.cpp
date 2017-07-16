#include<bits/stdc++.h>
using namespace std;
vector<int> v[10];
int level [10];
bool vis [10];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
     level[s]=0;
     vis[s]=true;
     while(!q.empty())
     {
         int p=q.front();
         cout<<"visited::"<<p<<"level::"<<level[p]<<endl;
         q.pop();
         for(int i=0;i<v[p].size();i++)
         {
             if(vis[v[p][i]]==false)
             {
                 level[v[p][i]]=level[p]+1;
                 q.push(v[p][i]);
                 vis[v[p][i]]=true;
              }
            }
         }
}
int main()
{
    int x,y,nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=0;i<10;i++)
        vis[i]=false;
    bfs(1);
   return 0;
}
