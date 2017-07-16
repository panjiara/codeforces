#include<bits/stdc++.h>
using namespace std;
vector<int> vec[1001];
bool visit[1001];
int n,m,k;
int p,q;
void dfs(int node)
{
    //cout<<node<<" ->";
    visit[node]=true;
    p++;
    for(int i=0;i<vec[node].size();i++)
    {
        int z=vec[node][i];
        if(!visit[z])
            dfs(z);
    }
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    int sg[k];
    for(int i=0;i<k;i++)
    {
        scanf("%d",&sg[i]);
    }
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    int s=0,t=0;
    for(int i=0;i<k;i++)
    {
        p=0;
        dfs(sg[i]);
        //cout<<endl;
        t+=p;
        s+=(p*(p-1)/2);
        q=max(q,p);
    }
    t=n-t+q;
    s+=(t*(t-1)/2)-(q*(q-1)/2);
    cout<<s-m ;
    return 0;
}
