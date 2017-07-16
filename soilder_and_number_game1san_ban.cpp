#include<bits/stdc++.h>
using namespace std;
bool isnotprime[5000000];int primedivisor[5000000],primefactor[5000000],sum[5000000];
void seive()
{
int p=2,i,j;primefactor[p]=1;
     while(p<=sqrt(50000000))
      {
        for(i=2*p;i<=5000000;i+=p)
        {
           isnotprime[i]=true;
           primedivisor[i]=p;
        }
        for(i=p+1;i<=(5000000);++i)
            if(!isnotprime[i])
              {
                p=i;
                primefactor[i]=1;
                break;
            }
       }
}
int main()
{
       int tc;
       scanf("%d",&tc);
       seive();
       int i;
       for(i=4;i<=5000000;++i)
            {
              if(!isnotprime[i])
               primefactor[i]=1;
             else
             primefactor[i]=primefactor[i/primedivisor[i]]+1;
            }
        sum[2]=1;
        for(i=3;i<=5000000;++i)
        sum[i]=primefactor[i]+sum[i-1];
        while(tc--)
          {
            int a,b,ans;
            scanf("%d%d",&a,&b);
            ans=sum[a]-sum[b];
            printf("%d\n",ans);
           }
 }
