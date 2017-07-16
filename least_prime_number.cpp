#include<bits/stdc++.h>
using namespace std;
#define M 100000
int prime[M];
bool vis[M];
int main()
{
   int n,i,j;
//memset(vis,false,sizeof vis);
   for(i=2;i<M;i+=2)
    prime[i]=2;
    for(i=3;i<M;i+=2)
    {
        if(!vis[i])
        {
            prime[i]=i;
            for(j=i;j*i<M;j+=2)
            {
                if(!vis[j*i])
                {
                    vis[i*j]=true;
                    prime[i*j]=i;
                }
            }

        }
    }
   for(i=0;i<M;i++)
    cout<<prime[i]<<" ";




    return 0;
}
