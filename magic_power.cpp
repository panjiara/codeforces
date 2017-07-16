#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],c[1005];
int n,m,k,l,j,i;
int chotu=INT_MAX,motu;
int main()
{
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
   for(i=0;i<n;i++)
    {
        c[i]=a[i]-b[i]%a[i];
        if(b[i]%a[i]==0)
            c[i]=0;

        chotu=min(b[i]/a[i],chotu);
    }
   for(i=0;i<n;i++)
    cout<<c[i]<<" ";
    cout<<endl;
    cout<<chotu<<endl;


    return 0;
}
