#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 ll dp[55][1005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int s,n,i,j,x,y;
    cin>>s>>n;
    vector<pair<int,int>> v;
    v.push_back(make_pair(0,0));
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cin>>y;

        v.push_back(make_pair(x,y));
    }
    memset(dp,0,sizeof dp);
    for( i=1;i<=n;i++)
    {
        for(j=0;j<=s;j++)
        {
            if(j<(v[i].first))
                dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=max(dp[i-1][j-v[i].first]+v[i].second,dp[i-1][j]);
        }
    }
    cout<<"Hey stupid robber, you can get "<<dp[n][s]<<"."<<endl;

    }

}

