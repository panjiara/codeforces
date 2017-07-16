#include<bits/stdc++.h>
using namespace std;
 long long int sp[5010000];
int vis[5010000];
long long int c[5010000];
long long int cal(long long int x)
{
   long long  int res=0;
   while(x!=1)
    {
        res++;
        if(sp[x]==0)
            sp[x]=x;
        x=x/sp[x];
    }
    return res;
}
int main()
{
  long long  int i,a,b,m;
    long long int j,cnt=0;
    sp[1]=1;
    long long int cs=(int)sqrt(5010000);
    //cout<<cs<<endl;
   for(i=2;i<5000001;i+=2)
   {
       sp[i]=2;
       vis[i]=1;
   }
   //
   for(i=3;i*i<5000001;i+=2)
   {
       if(i<0)
        cout<<"pak"<<endl;
       if(vis[i]==0)
       {
           sp[i]=i;
           for( j=i;i*j<5000001;j++)
           {
              if(vis[(i*j)]==0)
               {
                   vis[i*j]=1;
                   sp[i*j]=i;
               }
           }
       }
    }
for(i=2;i<5000001;i++)
{
    cnt+=cal(i);
    c[i]=cnt;
}
scanf("%d",&m);
 for(i=1;i<=m;i++)
 {
     scanf("%d%d",&a,&b);
        printf("%d\n",c[a]-c[b]);
 }


    return 0;
}
