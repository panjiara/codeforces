#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
int m,n, i,j,k,l,x,y;
int adj[4005][4005];
vector<int> v[4005];
int main()
{
    cin>>n>>m;
    memset(adj,0,sizeof adj);
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
        adj[x][y]=1;
        adj[y][x]=1;

    }
    int ans=INT_MAX;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {

            if(adj[i][j])
            {
                for(k=j+1;k<=n;k++)
                {
                    if(adj[i][j]&&adj[j][k]&&adj[i][k])
                    {
                        ans=min(ans,(int)v[i].size()+(int)v[j].size()+(int)v[k].size());
                    }

                }

            }
        }
    }
    if(ans==INT_MAX)
        cout<<-1<<endl;
    else
        cout<<ans-6<<endl;

}
