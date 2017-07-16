#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    int sl=s.length(),pl=p.length(),i,j;
    int dp[sl+1][pl+1];
    memset(dp,0,sizeof dp);
    for(i=0;i<=sl;i++)
    {
        for(j=0;j<=pl;j++)
        {
            if(i==0)
                dp[i][j]=j;
            if(j==0)
                dp[i][j]=i;
            else if(s[i-1]==p[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;

             cout<<dp[i][j]<<" ";
        }
        cout<<endl;


    }



    return 0;
}
