#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool v[n+1]={0};
    int a[n],b[n],c[n];
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            c[i]=a[i];
            v[a[i]]=1;

        }
        if(a[i]!=b[i])
        {
          c[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(c[i]==0)
        {
            for(int j=1;j<=n;j++)
            {
                if(v[j]==0&&(j==a[i]||j==b[i]))
                {
                    c[i]=j;
                    v[j]=1;
                    break;
                }

            }

        }


    }
    for(i=0;i<n;i++)
    {
        if(c[i]==0)
        {
            for(int j=1;j<=n;j++)
            {
                if(v[j]==0)
                {
                    c[i]=j;
                    v[j]=1;
                    break;
                }

            }

        }


    }
 for(i=0;i<n;i++)
    cout<<c[i]<<" ";


    return 0;
}
