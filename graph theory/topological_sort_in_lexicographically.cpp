#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,e;
cin>>n>>e;
int adj[n][n];
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        adj[i][j]=0;
bool visited[n];
int in_degree[n];
vector<int> T;
for(int i=0;i<n;i++)
{
    visited[i]=false;
    in_degree[i]=0;
}
for(int i=0;i<e;i++)
{
    int x,y;
    cin>>x>>y;
    adj[x][y]=1;
}
for(int i=0;i<n;i++)
{
   for(int j=0;j<n;j++)
   {
       if(adj[i][j]==1)
       {
           in_degree[j]++;
       }
   }
}
set<int> Q;
for(int i=0;i<n;i++)
{
  if(in_degree[i]==0)
  {
      Q.insert(i);
      visited[i]=true;
  }
}
      while(!Q.empty())
       {
           set<int>::iterator lt=Q.begin();
           int vertex=*lt;
           Q.erase(vertex);
           T.push_back(vertex);
           for(int j=0;j<n;j++)
           {
               if(adj[vertex][j]==1&&visited[j]==false)
               {
                   in_degree[j]--;
                   if(in_degree[j]==0)
                   {
                       Q.insert(j);
                       visited[j]=true;
                   }

                }

            }
        }

int i=0;
       for(vector<int>::iterator it=T.begin();it!=T.end();it++,i++)
       {

          cout<<(*it)<<" ";
       }
       cout<<endl;
       return 0;
}
