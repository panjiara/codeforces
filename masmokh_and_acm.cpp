#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M= (ll)(1e9+7);
ll dp[2010][2010];
ll f(int k,int n)
{

   if(dp[k][n]!=-1)
    return dp[k][n];
    dp[k][n]=0;
    for(int j=1;j<=n;j++)
    {
        dp[k][n]=(dp[k][n]+f(k-1, n/j))%M;

    }
  return dp[k][n];
}
int main()
{

    int n,k,i;
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
            dp[i][j]=-1;
    }
    for( i=1;i<=n;i++)
        dp[1][i]=(ll)i;
cout<<(ll)f(k,n)%M<<endl;
    return 0;
}

