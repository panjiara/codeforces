#include<bits/stdc++.h>
using namespace std;
int n,m,k,i,j,l,x,y,z;
int a[100010],p[100010],c[100010];
long long int sum;
int main()
{
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]=i+1;
    }
    for(i=0;i<m;i++)
        cin>>c[i];
    for(i=0;i<m;i++)
    {
        x=c[i];
        //cout<<p[x]<<endl;
        if(p[x]>k)
        {
          y=p[x]/k+1;
          if(p[x]%k==0)
            y-=1;
        }
       else
        y=1;
       z=p[x];
       if(p[x]!=1)
       {
           swap(a[p[x]-1],a[p[x]-2]);
           p[x]--;
          p[a[z-1]]++;
       }
      /* for(j=0;j<=n;j++)
       {
         cout<<p[j]<< " ";
       }
       cout<<endl;
       for(j=0;j<n;j++)
       {
           cout<<a[j]<< " ";
       }
       cout<<endl;*/
       sum+=y;
    }
    cout<<sum<<endl;
    return 0;
}

