#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,m,v,i,j=0,d,sum=0;;
    cin>>n>>m>>v;
    int p[n*m];
    for(i=0;i<n*m;i++)
    {
      cin>>p[i];
      if(i==0)
      {
         d=p[i]%v;
      }
      else
      {
          if(d!=p[i]%v)
            j=1;
      }
    }
    if(j==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(p,p+n*m);
   // cout<<p[n*m/2]<<endl;
   for(i=0;i<n*m;i++)
    {
       // cout<<p[i]<<" "<<sum<<endl;
        sum+=abs(p[i]-p[(n*m/2)]);

    }
    cout<<sum/v<<endl;
    return 0;
}
