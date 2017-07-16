#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int>> v[n+1];
    for(int i=0;i<m;i++)
    {
       int x,y,z;
       cin>>x>>y>>z;
       v[x].push_back(make_pair(y,z));
       v[y].push_back(make_pair(x,z));
    }
    int city[n+1]={0};
    int c[k];
    int chotu=INT_MAX;
for(int i=0;i<k;i++)
{
    int x;
   cin>>x;
   c[i]=x;
   city[x]=1;
}
for(int i=0;i<k;i++)
{
    int x=c[i];
    for(int j=0;j<v[x].size();j++)
   {
      // cout<<x<<"  "<<v[x][j].first<<" "<<v[x][j].second<<" "<<chotu<<endl;

      if(chotu>v[x][j].second&&city[v[x][j].first]==0)
        chotu=v[x][j].second;
   }

}


if(chotu==INT_MAX)
    cout<<"-1"<<endl;
else
cout<<chotu<<endl;
return 0;
}

