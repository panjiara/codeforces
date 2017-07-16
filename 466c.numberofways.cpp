#include<bits/stdc++.h>
using namespace std;
int c[500010];
int a[500010];
int n,i,j,k,l;
long long int ss,ans,sum;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3!=0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    sum/=3;
    ss=0;
    for(i=n-1;i>=0;i--)
    {
        ss+=a[i];
        if(ss==sum)
            c[i]=1;
    }
    /*for(i=0;i<n;i++)
        cout<<c[i]<<" ";
   cout<< endl;*/
    for(i=n-2;i>=0;i--)
    {
        c[i]+=c[i+1];
    }
   /*  for(i=0;i<n;i++)
        cout<<c[i]<<" ";
   cout<< endl;*/
    ans=0;
    ss=0;
    for(i=0;i<n-2;i++)
    {
        ss+=a[i];
        if(ss==sum)
            ans+=c[i+2];
    }
    cout<<ans<<endl;
    return 0;
}
