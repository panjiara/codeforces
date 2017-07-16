#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
              int x;
              cin>>x;
              if(x==0)
              ;
              else
              {
                a[i][j]=x;
              }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
               if(a[i][k]!=INT_MAX&&a[k][j]!=INT_MAX)
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}

