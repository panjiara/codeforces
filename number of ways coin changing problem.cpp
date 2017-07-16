#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t,x,i,j;
    cin>>t;
    vector<int> v;
     v.pb(0);
    while(t--)
    {
        v.pb(1);
        v.pb(3);
        v.pb(5);
       cin>>x;
       int dp[4][x+1];
       memset(dp,0,sizeof dp);
       dp[0][0]=1;
       for(i=1;i<=3;i++)
       {
           for(j=0;j<=x;j++)
           {
               if(j<v[i])
                   dp[i][j]=dp[i-1][j];
               else
                dp[i][j]=dp[i-1][j]+dp[i][j-v[i]];
               //cout<<dp[i][j]<<" ";
           }
           //cout<<endl;

       }
        cout<<dp[3][x]<<endl;

    }



}
