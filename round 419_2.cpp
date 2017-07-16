#include<bits/stdc++.h>
using namespace std;
int m[200005];
int a[200005];
int main()
{
    memset(m,0,sizeof(m));
    memset(a,0,sizeof(a));
    int n,i,j,k,q,x,y,c=0;
    cin>>n>>k>>q;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        for(j=x;j<=y;j++)
        {
             m[j]+=1;
             //cout<<m[j]<<endl;

        }
    }
    for(i=1;i<=200005;i++)
    {
        if(m[i]>=k)
        {
            a[i]=1+ a[i-1];
        }
        else
            a[i]=a[i-1];
    }
    for(i=0;i<q;i++)
    {

        scanf("%d%d",&x,&y);
            if(a[x]==a[x-1])
        cout<<a[y]-a[x]<<endl;
        else
            cout<<a[y]-a[x]+1<<endl;
    }
    return 0;
}
