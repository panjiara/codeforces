
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,j,n,ma=0;
    string p,q;
    cin>>p>>q;
    m=p.length();
    n=q.length();
    int dp[m+1][n+1];
    memset(dp,0,sizeof dp);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(p[i-1]==q[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                ma=max(dp[i][j],ma);
            }

            else
                dp[i][j]=0;
            //cout<<dp[i][j]<<" ";

        }
        //cout<<endl;

    }
cout<<ma<<endl;


    return 0;
}
