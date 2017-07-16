#include<bits/stdc++.h>
using namespace std;
long long int a[405][405],b[405][405];

int main()
{
    int n,m;
    cin>>n>>m;
    int i,j,k,l,x,y;

    for(i=1;i<=n;i++)
    {
        for( j=1;j<=n;j++)
        {
            a[i][j]=1<<30;
            b[i][j]=1<<30;
        }
    }
    //cout<<a[1][1]<<endl;
    for( i=0;i<m;i++)
    {
       cin>>x>>y;
     a[x][y]=1;
     a[y][x]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1<<30)
                b[i][j]=1;
            if(i==j)
            {
                b[i][j]=0;
                a[i][j]=0;
            }
        }
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                b[i][j]=min(b[i][j],b[i][k]+b[k][j]);
            }
        }
    }
    long long ans=max(a[1][n],b[1][n]);
    if(ans>=(1<<29)) ans=-1;
    cout << ans << endl;


    return 0;
}
