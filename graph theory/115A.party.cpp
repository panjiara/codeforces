#include<bits/stdc++.h>
using namespace std;
bool visited[2001];
vector<int> adj[2001];
int level[2001];
int nodes;
void initialize()
{
    for(int i=0;i<=nodes;i++)
    {
       visited[i]=false;
       level[i]=0;
    }

}
int bfs(int s)
{
    queue<int> Q;
    visited[s]=true;
    Q.push(s);
    level[s]=1;
      int index;
      int l=level[s];
    while(!Q.empty())
    {
     index =Q.front();
        Q.pop();
        for(int i=0;i<adj[index].size();i++)
        {
            if(visited[adj[index][i]]==false)
            {
                level[adj[index][i]]=level[index]+1;
                l=level[adj[index][i]];
                Q.push(adj[index][i]);
                visited[adj[index][i]]=true;
            }
        }
    }
    return l;
}
int main()
{
   cin>>nodes;
   for(int i=0;i<nodes;i++)
   {
       int x;
       cin>>x;
       if(x!=-1)
       {
           adj[x].push_back(i+1);
        }
    }

    int ma=INT_MIN;
    for(int i=1;i<=nodes;i++)
    {
        initialize();
        int x=bfs(i);
        if(x>ma)
            ma=x;

    }
    cout<<ma<<endl;
return 0;
}
