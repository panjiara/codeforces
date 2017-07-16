#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
vector<pair<int,int>> adj[100005];
long long dis[100005];
int  pa[100005];
 int n,m,i,j,k,x,y,z;
void go()
{
    for(i=0;i<=n;i++)
    {
        pa[i]=-1;
        dis[i]=(1LL<<40);
    }
    set<pair<int,int>> s;
    s.insert({0,1});
    dis[1]=0;
    pa[1]=1;
    while(s.size())
    {
        int cur=(*s.begin()).second;
        s.erase(s.begin());
        for(i=0;i<adj[cur].size();i++)
        {
            int cnode=adj[cur][i].first;
            if(dis[cnode]>dis[cur]+adj[cur][i].second)
            {
                //if(dis[cnode]!=(1LL<<40))
                //s.erase({dis[cnode],cnode});
                dis[cnode]=dis[cur]+adj[cur][i].second;
                s.insert({dis[cnode],cnode});
                 pa[cnode]=cur;
            }

        }
    }
}
int main()
{

    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        adj[x].pb(mp(y,z));
        adj[y].pb(mp(x,z));
    }
    go();
    if(dis[n]>=(1LL<<40))
    {
        cout<<-1<<endl;
        return 0;
    }
    vector<int> ans;
    x=n;
    while(pa[x]!=1)
    {
        ans.pb(x);
        x=pa[x];
    }
    ans.pb(x);
    cout<<1<<" ";
    for(i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<"  ";
     return 0;
}
