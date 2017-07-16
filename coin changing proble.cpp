#include<bits/stdc++.h>
using namespace std;
long long int dp[1005][1005];
int main()
{
   int n,t ,i,j;
   cin>>n>>t;
   int a[n+1];
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   //for(i=1;i<=n;i++)
    //cout<<a[i]<<endl;
memset(dp,0,sizeof dp);
for(i=1;i<=n;i++)
{
    for(j=0;j<=t;j++)
    {

        if(j<a[i])
         dp[i][j]=dp[i-1][j];
        else
        {
            if(i==1)
            dp[i-1][j]=INT_MAX;
            dp[i][j]=min(dp[i][j-a[i]]+1,dp[i-1][j]);
        }
        //cout<<dp[i][j]<<" ";

    }
    //cout<<endl;
}
cout<<dp[n][t]<<endl;
i=n;j=t;
/*while(j!=0)
{
   //cout<<i<<"  "<<j<<endl;
    if(j>=a[i]&&dp[i][j]==dp[i][j-a[i]]+1)
   {

      cout<<a[i]<<"  ";
      j-=a[i];
   }
   if(dp[i][j]==dp[i-1][j])
   {
       i--;
   }



}*/






    return 0;
}
