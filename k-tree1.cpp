#include<bits/stdc++.h>
using namespace std;
 long long int m,n,i,j,k,l,d;
 #define mod 1000000007
int main()
{
    cin>>n>>k>>d;
   long long dp[n+1]={0};
   long long d_p[n+1]={0};
    dp[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i<j)
                break;
            dp[i]=(dp[i]+dp[i-j])%mod;

        }
    }
    d_p[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<d;j++)
        {
            if(i<j)
                break;
            d_p[i]=(d_p[i]+d_p[i-j])%mod;
        }
    }
    cout<<(dp[n]-d_p[n]+mod)%mod;
    return 0;
}
