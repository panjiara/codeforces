#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int r,g,b,c=0,ans=0;
     int a[3];
     cin>>a[0]>>a[1]>>a[2];
     sort(a,a+3);
    r=a[0],g=a[1],b=a[2];
    g-=r;
    b-=r;
    c=r+(g/3+b/3);
    ans+=(a[1]/3+a[2]/3);
    if(a[0]>=3)
    {
        ans+=(min(a[1]%3,a[2]%3));
        ans+=((a[0]-min(a[2]%3,a[1]%3))/3);
    }
   // cout<<c<<" "<< ans<<endl;
     cout<<max(c,ans)<<endl;

     return 0;
 }
