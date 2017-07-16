#include<bits/stdc++.h>
using namespace std;
long long n,x,l,r,c,inf=2e9+1,ans=2e9+1,i,j,k;
vector<pair<long long ,long long> >diff[200001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>x;
    for(i=0;i<n;i++)
    cin>>l>>r>>c,diff[r-l+1].push_back({l,c});
    for(i=0;i<=x;i++)
        sort(diff[i].begin(),diff[i].end());
    for(int d=1;d<x;d++)
    {
        j=0;
        long long mini=inf;
        for(i=0;i<diff[x-d].size();i++)
        {
         while(j<diff[d].size()&&diff[d][j].first+d-1<diff[x-d][i].first)
        mini=min(mini,diff[d][j].second),j++;
        if(mini!=inf)
            ans=min(ans,mini+diff[x-d][i].second);
        }
    }
  cout<<((ans==inf)?-1:ans);

}
