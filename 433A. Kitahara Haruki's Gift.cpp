#include<bits/stdc++.h>
using namespace std;
#define E cout<<endl
int main()
{
    int n,sum=0,x,i,j;
    cin>>n;
    int a[n+1];
    for(i=1;i<n;i++)
    {
        cin>>x;
        a[i]=x/100;
        sum+=a[i];
    }
    sort(a,a+n);
    int dp[n+1][sum+1];
    memset(dp,0,sizeof dp);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
        {
            if(j<a[i])
            {
                dp[i][j]=dp[i-1][j];
            }
            else
                dp[i][j]=min(dp[i][j-a[i]]+1,dp[i-1][j]);
            cout<<dp[i][j]<<" ";
        }
        E;

    }

    return 0;
}
