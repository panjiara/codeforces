#include<bits/stdc++.h>
using namespace std;
const int maxk=1010,maxn=maxk,mod=1000*1000*1000+7;
long long ans =1;
int f[maxk];
int calc(int n,int k)
{
    if(k==1)
        return 1;
    if(k==2)
        return n+1;
    int i,j,suff[maxn];
    for(i=0;i<=n;i++)
        f[i]=n-i+1;
    for(i=4;i<=k;i++)
    {
        suff[n]=f[n];
        for(j=n-1;j>=0;j--)
            suff[j]=(suff[j+1]+f[j])%mod;
        for(j=0;j<=n;j++)
        f[j]=suff[j];

    }
    int sum=0;
    for(j=0;j<=n;j++)
        sum=(sum+f[j])%mod;
    return sum;
}
int main()
{
    int k,temp;
    cin>>k>>temp;
    int i,sum=temp;
     for(i=2;i<=k;i++)
     {
         cin>>temp;         ans=(ans*calc(temp-1,sum+1))%mod;
         sum+=temp;
     }
     cout<<ans<<endl;
    return 0;
}
