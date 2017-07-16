#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> v[305];

int main()
{
    int n;
    cin>>n;
    int i=0,j,k;
    int a[n];
    for(i;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        string  x;
        cin>>x;
        for(j=0;j<n;j++)
        {
            if(x[j]=='1'||j==i)
            {
                v[i].pb(1);
            }
            else
                v[i].pb(0);

        }

    }
   for(k=0;k<n;k++)
       for(i=0;i<n;i++)
          for(j=0;j<n;j++)
          if(v[i][k]==1&&v[k][j]==1)
            v[i][j]=1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v[i][j]==1&&a[i]>a[j])
                swap(a[i],a[j]);

        }

    }
for(k=0;k<n;k++)
    cout<<a[k]<<" ";
    cout<<endl;


    return 0;
}
