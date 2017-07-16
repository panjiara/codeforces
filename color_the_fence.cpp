#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int dp[10][N];
int main()
{
   int v,i,j;
   cin>>v;
   int a[10];
   for(i=1;i<10;i++)
   {
       cin>>a[i];
   }
   if(v==0)
   {
    cout<<-1<<endl;
    return 0;
}
   for(i=1;i<10;i++)
   {
       for(j=0;j<=v;j++)
       {
           if(j<a[i])
           {
               dp[i][j]=0;
           }
           else
            dp[i][j]=max(dp[i][j-a[i]]+1,dp[i-1][j]);
           //cout<<dp[i][j]<<" ";

       }
       //cout<<endl;
   }
   i=9,j=v;
while(i>=0&&j>=1)
{
    if(dp[i][j]==dp[i-1][j])
    {
        i--;

    }
    else if(dp[i][j]==dp[i][j-a[i]]+1)
    {
        cout<<i;
        j=j-a[i];
    }
}

return 0;
}
