#include<bits/stdc++.h>
using namespace std;
char s[101][101];
int main()
{
    int n,k;
    cin>>n>>k;
    int max_k;

    if(n%2==0)
        max_k=(n/2)*n;
    else
        max_k=((n+1)/2)*((n+1)/2)+(n/2)*(n/2);
        //cout<<max_k<<endl;
    if(max_k<k)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        int count=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                if(count==k)
                    flag=1;
                if(flag==1)
                {
                    s[i][j]='S';
                }
                else
                {
                   if(i%2==0)
                    {
                       if(j%2==0)
                       {
                           s[i][j]='L';
                           count++;
                       }
                       else
                        s[i][j]='S';
                    }
                    else
                    {
                        if(j%2!=0)
                       {
                           s[i][j]='L';
                           count++;
                       }
                       else
                        s[i][j]='S';
                    }
                }
            }
        }
        int t=0;
        for(int i=0;i<n;i++)
          {
             for(int j=0;j<n;j++)
             {
                cout<<s[i][j];
                if(s[i][j]=='L')
                    t++;
             }

             cout<<endl;

          }
            //cout<<t<<endl;


    }




    return 0;
}
