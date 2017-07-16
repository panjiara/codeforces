#include<bits/stdc++.h>
using namespace std;
long long int dp[33][33];
long long int  fact(int n,int r)
{
    //cout<<n<< " "<<r<<endl;
    if(n==r)
        return dp[n][r]=1;
    if(r==1)
        return dp[n][r]=(long long int )n;
    if(r==0)
        return dp[n][r]=1;
    if(dp[n][r])
        return dp[n][r];
    dp[n][r]=fact(n-1,r)+fact(n-1,r-1);
    return dp[n][r];
}
int main()
{
    int n,m,t;
    cin>>n>>m>>t;
    long long int sum=0;
    fact(30,29);
    int i,j,k,l;
    i=4,j=1;
    for(i=4;i<=n;i++)
    {
        for(j=1;j<=m;j++)
       {
         if(i+j==t)
         {
             sum+=(fact(n,i)*fact(m,j));
         }

     }
    }
   cout<<sum<<endl;
    return 0;

}
