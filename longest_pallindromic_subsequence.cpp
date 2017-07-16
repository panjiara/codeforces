#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int dp[n][n];
    memset(dp,0,sizeof dp);
    int l,i,j;
    for(l=1;l<=n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            j=i+l-1;
            if(i==j)
            {
                dp[i][j]=1;
                cout<<dp[i][j]<<" ";
                continue;
            }
            if(s[i]==s[j])
            {
                dp[i][j]=2+dp[i+1][j-1];
            }
            else
                dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
             cout<<dp[i][j]<<" ";

        }
        cout<<endl;


    }


    return 0;
}
