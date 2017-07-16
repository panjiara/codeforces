//##$@UR@|}|=|
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    int a[n],b[n],ans=0;
    string s,m;
    cin>>s>>m;
    for(i=0;i<n;i++)
      {
          a[i]=s[i]-'0';
          b[i]=m[i]-'0';
      }
      sort(a,a+n);
    sort(b,b+n);
      for(i=0;i<n;i++)
      {
          if(a[j]<=b[i])
          {
              ans++;
              j++;
          }
      }
cout<<n-ans<<endl;
j=0;
ans=0;
for(i=0;i<n;i++)
{
    if(a[j]<b[i])
    {
        ans++;
        j++;
    }
}
cout<<ans<<endl;
    return 0;
}
