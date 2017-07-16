#include<bits/stdc++.h>
using namespace std;
int vis[100005];
vector<int> v[100005];
int a[100005];
 int n,m,j,k,l,x,y,ans;
void dfs(int d,int c)
{
    if(c>m)
        return;
    vis[d]=1;
    int flag=0;
    //cout<<"visited node is  :  "<<d<<"->";
    for(int i=0;i<v[d].size();i++)
    {
        if(vis[v[d][i]]==0)
        {
           flag=1;
           if(a[v[d][i]]==1)
                dfs(v[d][i],c+1);
            else
            dfs(v[d][i],0);
        }
    }
    if(flag==0)
        ans++;
}
int main()
{

    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,a[1]);
     cout<<ans<<endl;
    return 0;
}
