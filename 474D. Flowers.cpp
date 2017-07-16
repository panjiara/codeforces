#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int dp[100001];
long long int sum[100001];
int main()
{
    ios_base::sync_with_stdio(0);
  int t,k;
  cin>>t>>k;
  for(int i=0;i<=100000;i++)
  {
      if(i>=k)
         dp[i]=(dp[i-1]+dp[i-k])%M;
     else
        dp[i]=1;
  }
  for(int i=0;i<100001;i++)
  {
      sum[i]=(sum[i-1]+dp[i])%M;
  }

  while(t--)
  {
     int i,j;
     cin>>i>>j;



      cout<<(sum[j]-sum[i-1]+M)%M<<endl;

  }




}
