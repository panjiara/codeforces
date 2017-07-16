#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,k,l;
    cin>>n;
    int b[n+1];
    int a[n];
    memset(b,0,sizeof b);
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    k=n;
    for(i=0;i<n;i++)
    {
        b[a[i]]=1;
      if(a[i]==k)
      {
         cout<<a[i]<<" ";
         b[a[i]]=1;
         k--;
         while(1)
         {
            if(b[k]==0)
            {
                cout<<endl;
                break;
            }
            if(b[k]==1)
            {
                cout<<k<<" ";
                k--;
            }
         }

      }
    else
        cout<<endl;
    }

    return 0;
}
