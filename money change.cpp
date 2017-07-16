#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,x,i,j;
    cin>>n;
    vector<int> v;
     v.pb(0);
     cin>>x;
     for(i=0;i<x;i++)
     {
         cin>>j;
         v.pb(j);
     }
      long long  int dp[v.size()][n+1];
       memset(dp,0,sizeof dp);
       dp[0][0]=1;
       for(i=1;i<v.size();i++)
       {
           for(j=0;j<=n;j++)
           {
               if(j<v[i])
                   dp[i][j]=dp[i-1][j];
               else
                dp[i][j]=dp[i-1][j]+dp[i][j-v[i]];
               //cout<<dp[i][j]<<" ";
           }
           //cout<<endl;

       }
        cout<<dp[v.size()-1][n]<<endl;





}
