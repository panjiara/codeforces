#include<bits/stdc++.h>
using namespace std;
long long int hor[600][600],ver[600][600];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,i,j,q,r1,r2,c1,c2,ans;
    cin>>n>>m;
    char a[n+1][m+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            ver[i][j]=ver[i-1][j]+ver[i][j-1]-ver[i-1][j-1];
            hor[i][j]=hor[i-1][j]+hor[i][j-1]-hor[i-1][j-1];
            if(a[i][j-1]=='.'&&a[i][j]=='.')
            hor[i][j]++;
            if(a[i-1][j]=='.'&&a[i][j]=='.')
            ver[i][j]++;
            //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
        }
    }
    cin>>q;
    while(q--)
    {
        cin>>r1>>c1>>r2>>c2;
        ans=hor[r2][c2]-hor[r1-1][c2]-hor[r2][c1]+hor[r1-1][c1];
        ans+=ver[r2][c2]-ver[r1][c2]-ver[r2][c1-1]+ver[r1][c1-1];
        cout<<ans<<"\n";
    }
    return 0;
}
