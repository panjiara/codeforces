#include<bits/stdc++.h>
using namespace std;
int a[201],b[201];
int main()
{
    int m,n;
    cin>>n>>m;
    int i;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
        cin>>b[i];
        if(m==1)
        {
            for( i=0;i<n;i++)
            {
              if(a[i]==0)
              {
                a[i]=b[0];
                int flag=0;
                for(int j=0;j<n-1;j++)
                {
                    if(a[j]>=a[j+1])
                    {
                      flag=1;
                      break;

                    }
                }
                if(flag==0)
                {
                    cout<<"No";
                    return 0;
                }
                else
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }

            }

              }


        }
    cout<<"Yes"<<endl;
    return 0;
}
