#include<bits/stdc++.h>
using namespace std;
long long dp[100010];
 int n=40,m=INT_MIN;
map<int,int> num;
long long ans(long long i)
{
    cout<<i<<endl;
    if(i>m)
        return 0;
    if(dp[i]!=-1)
    return dp[i];
        dp[i]=max(ans(i+2),ans(i+3))+i*num[i];
    return dp[i];
}
int main()
{
    int i,j,k,l;
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(i=0;i<n;i++)
        +{
        cin>>k;
        m=max(m,k);
        num[k]++;
    }
    cout<<max(ans(1),ans(0));

    return 0;
}
