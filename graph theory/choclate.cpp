#include<bits/stdc++.h>
using namespace std;
int a[100+2];
int main()
{
    int n,i,j=0,k=0,flag;
    long long int ans=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            j++;
    }
    if(j==0)
    {
        cout<<0<<endl;
        return 0;
    }
    i=1;
    //10101
   while(i<=n)
    {

        if(a[i]==1)
        {
            k=0;
            flag=0;
            j=i+1;
            while(j<=n)
            {
                if(a[j]==1)
                {
                flag=1;
                break;
                }
                k++;
                j++;
            }
            if(flag==1)
            ans*=(k+1);
            i=j;
        }
        else
            i++;

    }
    cout<<ans<<endl;
    return 0;
}
