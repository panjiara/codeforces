#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l;
int a[51][51];
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int flag=0;
    for(i=0;i<n;i++ )
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=1)
            {
                flag=0;
                for(k=0;k<n;k++)
                {
                    for(l=0;l<n;l++)
                    {
                        if(a[i][k]+a[l][j]==a[i][j])
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                        break;
                }
                if(flag==0)
                {
                    cout<<"No"<<endl;
                    return 0;
                }



            }


        }

    }
    cout<<"Yes"<<endl;
    return 0;
}
