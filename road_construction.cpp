#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    bool a[n+1]={0};
    int i;//
    for(i=0;i<m;i++ )
    {
        int x,y;
        scanf("%d%d",&x,&y);
        a[x]=1;
        a[y]=1;
    }
    printf("%d\n",n-1);
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                else
                    printf("%d %d\n",i,j);
            }
            break;
        }
    }
return 0;
}
