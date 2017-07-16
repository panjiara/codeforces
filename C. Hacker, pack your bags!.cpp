#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l,x,y,z,xi,yi,zi,xj,yj,zj,ma=INT_MAX;
vector<pair<pair<long long int,long long int>,long long int>> v;
bool comp(const pair<pair<long long int,long long int>,long long int> &a, const pair<pair<long long int,long long int>,long long int> &b )
{
    if((a.first).second-(a.first).first<(b.first).second-(b.first).first)
    {
        return 1;
    }
    else if((a.first).second-(a.first).first>(b.first).second-(b.first).first)
        return 0;
    else if((a.first).second-(a.first).first==(b.first).second-(b.first).first)
    {
        if(a.second<b.second)
            return 1;
        else
            return 0;
    }
}
int main()
{
    cin>>n>>m;
    v.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        v[i]={{x,y},z};
    }
   sort(v.begin(),v.end(),comp);
   i=0,j=n-1;
   while(i<j)
   {
       xi=(v[i].first).first;
       yi=(v[i].first).second;
       zi=v[i].second;
       xj=(v[j].first).first;
       yj=(v[j].first).second;
       zj=v[j].second;
         if((xi<yj||yj<xi)&&((yi-xi)+(yj-xj)+2==m))
          {
             ma=min(ma,zi+zj);
             j--;
          }
        if(((yi-xi)+(yj-xj)+2>m))
       {
           j--;
       }
        if(((yi-xi)+(yj-xj)+2<m))
       {
           i++;
       }


   }
   if(ma==INT_MAX)
    cout<<-1<<endl;
   else
    cout<<ma<<endl;
    return 0;
}
