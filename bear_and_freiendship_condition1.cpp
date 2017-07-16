#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
bool gaya[150001];
long long int nodes=0,edges=0;
vector<int> v[150001];
void dfs(int i)
{
    if(gaya[i])
        return ;
        nodes++;
    gaya[i]=1;
    for(int j=0;j<v[i].size();j++)
    {
        edges++;
        if(gaya[v[i][j]])
            continue;
            dfs(v[i][j]);

    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int i,j,x,y;
    memset(gaya,0,sizeof gaya);
    for(i=0;i<k;i++)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(i=1;i<=n;i++)
    {
        if(gaya[i])
            continue;
        edges=0;
        nodes=0;
        dfs(i);
        if(nodes>2)
        {
            if(edges!=(nodes*(nodes-1)))
        {
            cout<<"NO";
            return 0;
        }
        }


    }
    cout<<"YES"<<endl;
    return 0;
}
