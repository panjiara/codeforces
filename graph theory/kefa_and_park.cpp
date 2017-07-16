#include<bits/stdc++.h>
using namespace std;
int m,cat[100100];
vector<int> adj[100100];
int ans,vis[100100];
void dfs(int s,int ct)
{
    if(ct>m)
    return;
    vis[s]=1;
    int flag=0;
    for(int i=0;i<adj[s].size();i++)
    {
        if(vis[adj[s][i]]==0)
        {
            flag=1;
            if(cat[adj[s][i]]==1)
                dfs(adj[s][i],ct+1);
            else
                dfs(adj[s][i],0);
        }
    }
    if(flag==0)
    ans++;
}
int main()
{
    int n,i,a,b;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>cat[i];
    }
    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,cat[1]);
    cout<<ans<<"\n";
    return 0;
}
