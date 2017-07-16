#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][n];
    int i,j,k;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=0;
    for(i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        a[x][y]=1;
        a[y][x]=1;
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                a[i][j]=1;
                if(i==k||j==k)
                    continue;
                if(a[i][k]==1&&a[k][j]==1)
                {
                    if(!a[i][j]||!a[j][i])
                    {

                        cout<<"NO"<<endl;
                        return 0;
                    }
                }


            }



        }
    }
    cout<<"YES"<<endl;
     return 0;
}
